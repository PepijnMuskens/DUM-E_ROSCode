from setuptools import find_packages
from setuptools import setup

setup(
    name='arduino_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('arduino_interfaces', 'arduino_interfaces.*')),
)
