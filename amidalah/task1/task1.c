#include <stdio.h>
#include <math.h>

int main() {
  int n;
  int ret = 0;
  if(scanf("%d", &n) == 1) {

  int A[n][n];

  for (int i = 0; i < n && ret != 1; ++i)
    for (int k = 0; k < n && ret != 1; ++k)
      if(scanf("%d", &A[i][k]) != 1) {
        printf("n/a");
        ret = 1;
        }

  int B[n][n];

  for (int i = 0; i < n && ret != 1; ++i)
    for (int k = 0; k < n && ret != 1; ++k)
      if(scanf("%d", &B[i][k]) != 1) {
        printf("n/a");
        ret = 1;
      }

  int C[n][n];
  if (ret == 0) {
  for (int i = 0; i < n; ++i) {
    for (int k = 0; k < n; ++k) {
      C[i][k] = 0;
      for (int c = 0; c < n; ++c) {
        C[i][k] += A[i][c] * B[c][k];
      }
    }
  }


  for (int i = 0; i < n; ++i) {
    for (int k = 0; k < n; ++k) {
        printf("%d ", C[i][k]);
    }
    printf("\n");
  }

  }
    } else printf("n/a");
  return ret;
}