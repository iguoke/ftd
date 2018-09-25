# -*- coding: utf-8 -*- 
import os

path = '../spec/'
target_path = '../ftd/'
files = ['ftd_2_0.xml',]

import gen_type_df
import gen_item_df
import gen_field_df
import gen_package_df
import gen_id_def

from dtd_parse import *

def generate_ftd(path, file, target_path):
    types,items,fields, packages, tids = load_dtd_file_fields(path, file)
    version = file.split('.')[0]
    nodes = version.split('_')
    version_number = nodes[1]
    version = ''.join(nodes).upper()
    ver_path = '%s/%s' %(target_path, version)
    if not os.path.exists(ver_path):
        os.makedirs(ver_path)
    gen_type_df.generate_type_df(version, list(types.values()), target_path)
    gen_item_df.generate_item_df(version, list(items.values()), target_path)
    gen_id_def.generate_id_df(version, list(tids.values()), list(fields.values()), target_path, version_number)
    for field in fields.values():
        gen_field_df.generate_field_struct(version, field, target_path)
    gen_field_df.generate_fields_include(version,
           list(fields.values()), target_path)
    for package in packages.values():
        gen_package_df.generate_package_struct(version, package, target_path, version_number)
    gen_package_df.generate_package_include(version, list(packages.values()), target_path)
    


if __name__ == "__main__":
    for file in files:
        generate_ftd(path, file, target_path)