from setuptools import find_packages
from setuptools import setup

setup(
    name='hello_ros',
    version='0.0.1',
    packages=find_packages(
        include=('hello_ros', 'hello_ros.*')),
)
