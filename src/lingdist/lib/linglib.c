#include "linglib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 
 */
int ortho_lev_dist_(char* str) {
	return 1;
}

/**
 * 
 */
int phono_lev_dist_(char* str) {
	return 2;
}

/**
 * References: 
 * https://www.geeksforgeeks.org/dsa/introduction-to-levenshtein-distance/
 * https://stackoverflow.com/questions/14295786/set-array-size-at-runtime
 * https://www.geeksforgeeks.org/c/length-of-array-in-c/ 
 * https://www.geeksforgeeks.org/c/macros-and-its-types-in-c-cpp/ 
 */
double levenshtein_distance_(const char* word1, const char* word2, const bool normalized) {

	// Debug print
	printf("word1: [%s]\n", word1);
	printf("word2: [%s]\n", word2);

	// Get lengths
	// size_of gets the allocated size, strlen gets the actual length
	size_t n = strlen(word1); 
	size_t m = strlen(word2);
	size_t n1 = n+1;

	// Debug print
	printf("n=%ld\n", n);
	printf("m=%ld\n", m);

	// Allocate size
	// Malloc to the proper size (in bytes), not just the len
	// e.g. malloc(n1 * sizeof(siz_t)) rather than malloc(n1)
	int *currRow = malloc(n1 * sizeof(int));
	int *prevRow = malloc(n1 * sizeof(int));

	// Allocate 0's to currRow
	for (size_t i = 0; i < n; i++) {
		currRow[i] = 0;
	}

	// Allocate 0 to n for prevRow
	for (size_t i = 0; i <= n; i++) {
		prevRow[i] = i;
	}

	// Fill the matrix with distance computation
	// Loop through word1
	for (size_t i = 1; i <= m; i++) {
		currRow[0] = i;

		// Loop through word 2
		for (size_t j = 1; j <= n; j++) {
			// Chars match so no operation needed
			if (word1[i - 1] == word2[j - 1]) {
				currRow[j] = prevRow[j - 1];
			// Otherwise find min of the 3 operations
			} else { 
				currRow[j] = 1 + MIN3(
					currRow[j - 1], // insert
					prevRow[j], 	// delete
					prevRow[j - 1]  // replace
				);
			}
		}

		// Swap
		int *tmp = prevRow;
		prevRow = currRow;
		currRow = tmp;

		// Debug loop to print elements of row
		for(size_t i = 0; i < n; i++) {
			if(i==n) {
				printf("%d\n", currRow[i]);
			} else {
				printf("%d ", currRow[i]);
			}
		}

		printf("\n");
	}
	int distance = prevRow[n];

	// Debug print
	printf("Distance: [%d]\n", distance);
	printf("Norm calc: 1 - %d / MAX2(%ld,%ld) (max=%ld)\n", distance, n, m, MAX2(n,m));

	// If normalized return normalized calulcation
	// (divide the lev dist by the number of letters in 
	// the longest string and subtracting the result from one)
	if(normalized) return 1.0 - (distance / (double)MAX2(n,m));

	return distance;
}