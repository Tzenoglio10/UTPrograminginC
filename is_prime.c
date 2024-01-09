/*
 * Student : Tomas Zenoglio de Oliveira
 * Number : 2806290
 * Assignment : 2.12
 */

#include <math.h>
#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);

  int isPrime = 1;

  if (number < 2) {
    isPrime = 0;
  } else {
    for (int i = 2; i <= sqrt(number); i++) {
      if (number % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  if (isPrime) {
    printf("%d is a prime number\n", number);
  } else {
    printf("%d is not a prime number\n", number);
  }

  return 0;
}
