from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_planning_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('autoware_planning_msgs', 'autoware_planning_msgs.*')),
)
