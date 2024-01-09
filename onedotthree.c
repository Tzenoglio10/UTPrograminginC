/*
 * Student : 
 * Number : 
 * Assignment : 1.3
 */

#include <stdio.h>
int main() {
  double Celcius;
  scanf("%lf", &Celcius);
  double Kelvin = Celcius + 273.15;
  double Merica = 1.8 * Celcius + 32;
  printf("C\tK\tF\n");
  printf("%.2f\t%.2f\t%.2f\n", Celcius, Kelvin, Merica);
  return 0;
}
