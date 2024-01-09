/*
 * Student : 
 * Number : 
 * Assignment : 3.3
 */
#include <math.h>
#include <stdio.h>

int isPrime(int number) {
  if (number < 2) {
    return 0;
  } else {
    for (int i = 2; i <= sqrt(number); i++) {
      if (number % i == 0) {
        return 0;
        break;
      }
    }
  }
  return 1;
}

int main() {
  int upper, lower;
  scanf("%d %d", &lower, &upper);
  for (int i = lower; i <= upper; i++) {
    if (isPrime(i) && i != 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
