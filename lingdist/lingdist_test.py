# python lingdist_test.py

import lingdist as ld

# print(ld.py_ortho_lev_dist("hello"))

w1 = "hello"
w2 = "h"
print(f"py_levenshtein_distance('{w1}', '{w2}')" +
	  f" = {ld.py_levenshtein_distance(w1, w2)}\n")

w1 = "hi"
w2 = "hallo"
print(f"py_levenshtein_distance('{w1}', '{w2}')" +
	  f" = {ld.py_levenshtein_distance(w1, w2)}\n")

w1 = "kitten"
w2 = "sitting"
print(f"py_levenshtein_distance('{w1}', '{w2}')" +
	  f" = {ld.py_levenshtein_distance(w1, w2)}\n")

w1 = "fun ky"
w2 = "funky"
print(f"py_levenshtein_distance('{w1}', '{w2}')" +
	  f" = {ld.py_levenshtein_distance(w1, w2)}\n")
