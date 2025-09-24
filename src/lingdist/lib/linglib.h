#ifndef LINGLIB_H
#define LINGLIB_H

#include <stddef.h>
#include <stdbool.h> 

#define MIN3(x, y, z) (((x) < (y)) ? ((x) < (z) ? (x) : (z)) \
                                    : ((y) < (z) ? (y) : (z)))

#define MAX2(x, y) (((x) > (y)) ? (x) : (y))

double levenshtein_distance_(const char* word1, const char* word2, const bool normalized);

#endif // LIGLIB_H