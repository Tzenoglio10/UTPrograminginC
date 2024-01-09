
#include <stdio.h>

double calculate_average(int number) {
  static int sum = 0;
  static int count = 0;

  if (number != 0) {
    sum += number;
    count++;
  }

  if (count == 0) {
    return 0;
  }

  return (double)sum / count;
}

int main(void) {
  double average;

  while (1) {
    int number;

    scanf("%d", &number);

    if (number == 0) {
      break;
    } else {
      average = calculate_average(number);
    }
  }
  printf("%.1f\n", average);

  return 0;
}
