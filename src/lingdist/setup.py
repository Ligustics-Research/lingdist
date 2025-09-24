# Cython setup - `python setup.py build_ext --inplace`

from setuptools import setup, Extension
from Cython.Build import cythonize

extensions = [
    Extension(
        "lingdist",
        sources=["lingdist.pyx", "lib/linglib.c"], 
        include_dirs=[".", "lib"]  
    )
]

setup(
    ext_modules=cythonize(extensions)
)
