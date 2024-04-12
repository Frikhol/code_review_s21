#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

typedef struct {
  char name[SIZE];
  char surname[SIZE];
  int hight;
} human;

int main() {
  int N = 0;
  int error = 0;
  if (scanf("%d", &N) != 1 || N < 0)
    error = 1;
  else {
    human humans[N];
    for (int i = 0; i < N && !error; i++)
      if (scanf("%1024s %1024s %d", humans[i].name, humans[i].surname,
                &humans[i].hight) != 3)
        error = 1;
    int H = 0;
    if (scanf("%d", &H) != 1 || H < 0)
      error = 1;
    else {
      int count = 0;
      for (int i = 0; i < N; i++)
        if (humans[i].hight >= H) {
          if (count) printf(", ");
          printf("%s %s", humans[i].name, humans[i].surname);
          count++;
        }
      if (!count) printf("Nothing");
    }
  }
  if (error) printf("n/a");
  return 0;
}