# lingdist developement
- Extending python with c functions via python

## Tips
### from lingdist dir:
- build setup --> `pip install -e .[dev]` 
### from lingdist/lingdist (this sub dir):
- cython --> `python setup.py build_ext --inplace`
	- run python test --> `python test/lingdist_test.py`
- c compile --> `make` 
	- run c test --> `./bin/linglib`


## References
- [Thin bindings for C code to Python with Cython](https://stavshamir.github.io/python/making-your-c-library-callable-from-python-by-wrapping-it-with-cython/), slighty out of date but should still work

