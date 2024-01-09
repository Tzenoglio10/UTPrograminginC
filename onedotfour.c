/*
 * Student : Tomas Zenoglio de Oliveira
 * Number : 2806290
 * Assignment : 1.4
 */
#include <math.h>
#include <stdio.h>

int main() {
  int N;
  double a, r, sum;
  scanf("%lf %d %lf", &a, &N, &r);
  for (int i = 0; i <= N; i++) {
    sum += a * pow(r, i);
  }

  printf("%.2f\n", sum);
  return 0;
}
