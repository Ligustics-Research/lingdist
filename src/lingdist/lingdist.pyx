# linglib.pyx - link from c -> python

cdef extern from "lib/linglib.h":
    double levenshtein_distance_(const char* word1, const char* word2, const bint normalized)

def levenshtein_distance(word1: str, word2: str, normalized: bool) -> double:
    cdef bytes e1 = word1.encode("utf-8")
    cdef bytes e2 = word2.encode("utf-8")
    cdef bint c3 = normalized
    cdef const char* c1 = e1
    cdef const char* c2 = e2
    
    return levenshtein_distance_(c1, c2, c3)
