# -*- coding: utf-8 -*- 

path = '../spec/'
files = ['FTD20.xml',]
from ftd_generator import *

def generate_ftd(path, file):
    fields = load_dtd_file_fields(path, file)
    version = file.split('.')[0]
    for field in fields:
        generate_field_struct(version, field)


if __name__ == "__main__":
    for file in files:
        generate_ftd(path, file)