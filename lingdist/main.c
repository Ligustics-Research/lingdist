#include <stdio.h>
#include "linglib.h"

int main() {
	char* w1 = "hello";
	char* w2 = "h";
	printf("levenshtein_distance('%s', '%s') = %d\n", w1, w2, levenshtein_distance(w1, w2));
	printf("\n");

	w1 = "hi";
	w2 = "hallo";
	printf("levenshtein_distance('%s', '%s') = %d\n", w1, w2, levenshtein_distance(w1, w2));

	w1 = "hi";
	w2 = "hi";
	printf("levenshtein_distance('%s', '%s') = %d\n", w1, w2, levenshtein_distance(w1, w2));

	w1 = "kitten";
	w2 = "sitting";
	printf("levenshtein_distance('%s', '%s') = %d\n", w1, w2, levenshtein_distance(w1, w2));

	w1 = "fun ky";
	w2 = "funky";
	printf("levenshtein_distance('%s', '%s') = %d\n", w1, w2, levenshtein_distance(w1, w2));

	return 0;
}