#include <stdio.h>
#include "linglib.h"

int main() {
	char* w1 = "hello";
	char* w2 = "h";
	printf("levenshtein_distance('%s', '%s', false) = %d\n\n", w1, w2, (int)levenshtein_distance_(w1, w2, false));
	printf("levenshtein_distance('%s', '%s', normalized=true) = %f\n", w1, w2, levenshtein_distance_(w1, w2, true));
	printf("\n");

	w1 = "hi";
	w2 = "hallo";
	printf("levenshtein_distance('%s', '%s', false) = %d\n\n", w1, w2, (int)levenshtein_distance_(w1, w2, false));
	printf("levenshtein_distance('%s', '%s', normalized=true) = %f\n", w1, w2, levenshtein_distance_(w1, w2, true));
	printf("\n");

	w1 = "hi";
	w2 = "hi";
	printf("levenshtein_distance('%s', '%s', false) = %d\n\n", w1, w2, (int)levenshtein_distance_(w1, w2, false));
	printf("levenshtein_distance('%s', '%s', normalized=true) = %f\n", w1, w2, levenshtein_distance_(w1, w2, true));
	printf("\n");

	w1 = "kitten";
	w2 = "sitting";
	printf("levenshtein_distance('%s', '%s', false) = %d\n\n", w1, w2, (int)levenshtein_distance_(w1, w2, false));
	printf("levenshtein_distance('%s', '%s', normalized=true) = %f\n", w1, w2, levenshtein_distance_(w1, w2, true));
	printf("\n");


	w1 = "fun ky";
	w2 = "funky";
	printf("levenshtein_distance('%s', '%s', false) = %d\n\n", w1, w2, (int)levenshtein_distance_(w1, w2, false));
	printf("levenshtein_distance('%s', '%s', normalized=true) = %f\n", w1, w2, levenshtein_distance_(w1, w2, true));

	return 0;
}