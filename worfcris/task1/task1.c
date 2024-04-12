#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int N) {
  int **matrix = malloc(N * sizeof(int *));
  for (int i = 0; i < N; i++) matrix[i] = calloc(N, sizeof(int));
  return matrix;
}

int fill_matrix(int ***matrix, int N) {
  int error = 0;
  for (int i = 0; i < N && !error; i++)
    if (scanf("%d%d", &(*matrix)[i][0], &(*matrix)[i][1]) != 2) error = 1;
  return error;
}

void clear_matrix(int ***matrix, int N) {
  for (int i = 0; i < N; i++) free((*matrix)[i]);
  free(*matrix);
}

int main() {
  int N = 0;
  int error = 0;
  if (scanf("%d", &N) != 1 || N <= 0)
    error = 1;
  else {
    int **A = create_matrix(N);
    int **B = create_matrix(N);
    int **C = create_matrix(N);
    error = fill_matrix(&A, N) || fill_matrix(&B, N);
    if (!error) {
      for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
          for (int k = 0; k < N; k++) C[i][j] += A[i][k] * B[k][j];
      for (int i = 0; i < N; i++) printf("%d %d\n", C[i][0], C[i][1]);
    }
    clear_matrix(&A, N);
    clear_matrix(&B, N);
    clear_matrix(&C, N);
  }
  if (error) printf("n/a");
  return 0;
}