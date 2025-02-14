from setuptools import find_packages
from setuptools import setup

setup(
    name='barista_table_finder',
    version='0.0.0',
    packages=find_packages(
        include=('barista_table_finder', 'barista_table_finder.*')),
)
