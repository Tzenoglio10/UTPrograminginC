/*
 * Student : 
 * Number : 
 * Assignment : 3.6
 */
#include <math.h>
#include <stdio.h>

// Internal helper function, not accessible outside this file
static double calculate_discriminant(double a, double b, double c) {
  return b * b - 4 * a * c;
}

// This function is accessible from other files
void abc(double a, double b, double c) {
  double discriminant = calculate_discriminant(a, b, c);
  printf("The roots of %.4fx^2 + %.4fx + %.4f are:\n", a, b, c);

  if (discriminant > 0) {
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("x1 = %.4f, x2 = %.4f\n", root1, root2);
  } else if (discriminant == 0) {
    double root = -b / (2 * a);
    printf("x = %.4f\n", root);
  } else {
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("x1 = %.4f+%.4fi, x2 = %.4f-%.4fi\n", realPart, imaginaryPart,
           realPart, imaginaryPart);
  }
}
