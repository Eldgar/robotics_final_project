from setuptools import find_packages
from setuptools import setup

setup(
    name='barista_alignment',
    version='0.0.0',
    packages=find_packages(
        include=('barista_alignment', 'barista_alignment.*')),
)
