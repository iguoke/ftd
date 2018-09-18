# -*- coding: utf-8 -*- 
import os

from io import BytesIO
from dtd_def import *
from file_util import *

ftd_type_template = './templates/id_def.template'
target_fname = 'Id.h'

def generate_id_df(version, tids, fields, target_path, version_number):
    template = load_template_file(ftd_type_template)
    d = {}
    tid_statments = []
    fid_statements = []
    def_template = '#define {0} {1}'
    for tid in tids:
        tid_statments.append(def_template.format(tid.name.ljust(35), tid.value))
    for field in fields:
        fid_statements.append(def_template.format(field.fid.ljust(35), field.fid_value))
    d['version'] = version
    d['tid_def'] = '\n'.join(tid_statments)
    d['fid_def'] = '\n'.join(fid_statements)
    d['version_number'] = version_number
    save_cpp_file(template.format_map(d), '%s/%s'%(target_path, target_fname))