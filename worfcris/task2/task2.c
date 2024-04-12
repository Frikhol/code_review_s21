#include <math.h>
#include <stdio.h>

#define P 21500

int main() {
  double R = 0;
  if (scanf("%lf", &R) != 1)
    printf("n/a");
  else {
    double V = 4.0 / 3 * M_PI * pow(R, 3);
    printf("%d", (int)round(V * P));
  }
  return 0;
}