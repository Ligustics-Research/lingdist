# python lingdist_test.py

from ...src import lingdist as ld

# print(ld.py_ortho_lev_dist("hello"))

w1 = "hello"
w2 = "h"
print(f"levenshtein_distance('{w1}', '{w2}, False')" +
	  f" = {ld.levenshtein_distance(w1, w2, False)}\n")
print(f"levenshtein_distance('{w1}', '{w2}, True')" +
	  f" = {ld.levenshtein_distance(w1, w2, True)}\n")

w1 = "hi"
w2 = "hallo"
print(f"levenshtein_distance('{w1}', '{w2}, False')" +
	  f" = {ld.levenshtein_distance(w1, w2, False)}\n")
print(f"levenshtein_distance('{w1}', '{w2}, True')" +
	  f" = {ld.levenshtein_distance(w1, w2, True)}\n")

w1 = "kitten"
w2 = "sitting"
print(f"levenshtein_distance('{w1}', '{w2}, False')" +
	  f" = {ld.levenshtein_distance(w1, w2, False)}\n")
print(f"levenshtein_distance('{w1}', '{w2}, True')" +
	  f" = {ld.levenshtein_distance(w1, w2, True)}\n")

w1 = "fun ky"
w2 = "funky"
print(f"levenshtein_distance('{w1}', '{w2}, False')" +
	  f" = {ld.levenshtein_distance(w1, w2, False)}\n")
print(f"levenshtein_distance('{w1}', '{w2}, True')" +
	  f" = {ld.levenshtein_distance(w1, w2, True)}\n")
