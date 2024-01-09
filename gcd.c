/*
 * Student : 
 * Number :
 * Assignment : 3.4
 */
#include <stdio.h>

int gcd(int p, int q) {
  int r;

  while ((r = p % q) != 0) {
    p = q;
    q = r;
  }
  return q;
}

int main() {
  int p, q;
  scanf("%d %d", &p, &q);
  printf("%d\n", gcd(p, q));
  return 0;
}
