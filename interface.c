/*
 * Student : 
 * Number : 
 * Assignment : 3.6
 */
#include "abc.c"
#include <stdio.h>

void get_parameters(double *a, double *b, double *c) {
  scanf("%lf %lf %lf", a, b, c);
}

int main(void) {
  int numberOfTriplets;
  scanf("%d", &numberOfTriplets);

  double a, b, c;
  for (int i = 0; i < numberOfTriplets; i++) {
    get_parameters(&a, &b, &c);
    abc(a, b, c);
  }

  return 0;
}
