/*
 * Student : Tomas Zenoglio de Oliveira
 * Number : 2806290
 * Assignment : 4.8
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Check if the word argument is given
  if (argc != 2) {
    printf("No argument given\n");
    return 0;
  }

  char *word = argv[1];
  int wordLength = strlen(word);
  char buf[1024]; // Buffer for reading lines
  int count = 0;  // Word count

  // Read lines until #EOF is encountered
  while (fgets(buf, 1024, stdin)) {
    if (strncmp(buf, "#EOF", 4) == 0) {
      break; // Exit loop if #EOF is found
    }

    // Search for the word in the line
    for (int i = 0; buf[i] != '\0'; ++i) {
      if (strncmp(&buf[i], word, wordLength) == 0) {
        count++;
        // Do not advance the index i here to ensure overlapping words are
        // counted
      }
    }
  }

  // Print the count
  printf("%d\n", count);
  return 0;
}
