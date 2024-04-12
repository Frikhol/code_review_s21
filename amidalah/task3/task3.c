
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[21];
    char surname[21];
    int height; 
} human;

int main() {
    int N, i, H;
    scanf("%d", &N);
    human *people = (human*)malloc(N * sizeof(human));
    if (!people) {
        return 1;
    }
    for (i = 0; i < N; i++) {
        scanf("%20s", people[i].name);
        scanf("%20s", people[i].surname);
        scanf("%d", &people[i].height);
        if (i < N - 1) {
            printf("\n");
        }
    }
    scanf("%d", &H);
    for (i = 0; i < N; i++) {
        if (people[i].height >= H) {
            printf("%s %s\n", people[i].name, people[i].surname);
        }
    }
    free(people);
    return 0;
}
