from setuptools import find_packages
from setuptools import setup

setup(
    name='static_centerline_optimizer',
    version='0.1.0',
    packages=find_packages(
        include=('static_centerline_optimizer', 'static_centerline_optimizer.*')),
)
