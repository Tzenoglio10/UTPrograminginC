/*
 * Student : Tomas Zenoglio de Oliveira
 * Number : 2806290
 * Assignment : 4.3
 */

#include <stdio.h>

#define MAX_PRODUCTS 100
#define MAX_CUSTOMERS 100

int main() {
  double prices[MAX_PRODUCTS];
  int quantities[MAX_CUSTOMERS][MAX_PRODUCTS];
  int n, m;

  // Read number of products and their prices
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%lf", &prices[i]);
  }

  // Read number of customers and their purchased quantities
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &quantities[i][j]);
    }
  }

  // Calculate and print total expense for each customer
  for (int i = 0; i < m; i++) {
    double total = 0.0;
    for (int j = 0; j < n; j++) {
      total += prices[j] * quantities[i][j];
    }
    printf("%.2f\n", total);
  }
  return 0;
}
