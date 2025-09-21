# linglib.pyx - link from c -> python

cdef extern from "linglib.h":
    int ortho_lev_dist(char* str)
    int levenshtein_distance(const char* word1, const char* word2)

def py_ortho_lev_dist(word: str) -> None:
    cdef bytes encoded = word.encode("utf-8")
    cdef char* c_name = encoded
    return ortho_lev_dist(c_name)

def py_levenshtein_distance(word1: str, word2: str) -> None:
    cdef bytes e1 = word1.encode("utf-8")
    cdef bytes e2 = word2.encode("utf-8")
    cdef const char* c1 = e1
    cdef const char* c2 = e2
    return levenshtein_distance(c1, c2)