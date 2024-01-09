/*
 * Student : 
 * Number : 
 * Assignment : 4.6
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the magnitude of a vector
double calculate_magnitude(double *vector, int dim) {
  double sum = 0.0;
  for (int i = 0; i < dim; i++) {
    sum += vector[i] * vector[i]; // Summing the squares of the vector elements
  }
  return sqrt(sum); // Returning the square root of the sum
}

// Function to swap two vectors
void swap(double **p, double **q) {
  double *tmp;
  tmp = *p;
  *p = *q;
  *q = tmp; // Swapping the pointers
}

// Function to sort vectors by their magnitude using bubble sort
void sort_vectors(double **vectors, int num, int dim) {
  int swapped;
  for (int i = 0; i < num - 1; i++) {
    swapped = 0;
    for (int j = 0; j < num - i - 1; j++) {
      // Compare magnitudes and swap if needed
      if (calculate_magnitude(vectors[j], dim) >
          calculate_magnitude(vectors[j + 1], dim)) {
        swap(&vectors[j], &vectors[j + 1]);
        swapped = 1;
      }
    }
    // If no swaps occurred in the inner loop, the array is sorted
    if (!swapped) {
      break;
    }
  }
}

// Function to print the vectors
void print_vectors(double **vectors, int num, int dim) {
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < dim; j++) {
      printf("%e ", vectors[i][j]); // Printing each element of the vector
    }
    printf("\n"); // New line after each vector
  }
}

int main(void) {
  int dim, num;
  double **w;

  // Read the dimensions and number of vectors
  scanf("%d %d", &dim, &num);

  // Allocate memory for the array of vector pointers
  w = calloc(num, sizeof(double *));
  for (int i = 0; i < num; i++) {
    // Allocate memory for each vector
    w[i] = calloc(dim, sizeof(double));
    for (int j = 0; j < dim; j++) {
      // Read each element of the vector
      scanf("%lf", &w[i][j]);
    }
  }

  // Sort the vectors and print them
  sort_vectors(w, num, dim);
  print_vectors(w, num, dim);

  // Free the allocated memory
  for (int i = 0; i < num; i++) {
    free(w[i]); // Free each vector
  }
  free(w); // Free the array of pointers

  return 0;
}
