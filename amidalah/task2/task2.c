#include <math.h>
#include <stdio.h>

int main() {
  double P = 21500;
  double rad;
  double V;
  double m;
  double result;
  if (scanf("%lf", &rad) == 1) { // возможно надо проверку на отрицательный радиус
    V = ((double)4 / 3 * M_PI * pow(rad, 3));
    m = P * V;
    result = (int)round(m);
    printf("%.0lf", result);
  } else
    printf("n/a");

  return 0;
}
