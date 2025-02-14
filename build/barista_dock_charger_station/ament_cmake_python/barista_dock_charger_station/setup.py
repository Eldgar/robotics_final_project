from setuptools import find_packages
from setuptools import setup

setup(
    name='barista_dock_charger_station',
    version='0.0.0',
    packages=find_packages(
        include=('barista_dock_charger_station', 'barista_dock_charger_station.*')),
)
