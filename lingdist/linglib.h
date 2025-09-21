#ifndef LINGLIB_H

#define LINGLIB_H

#include <stddef.h>

#define MIN3(x, y, z) (((x) < (y)) ? ((x) < (z) ? (x) : (z)) \
                                    : ((y) < (z) ? (y) : (z)))

int ortho_lev_dist(char* str);

int phono_lev_dist(char* str);

int levenshtein_distance(const char* word1, const char* word2);

#endif // LIGLIB_H