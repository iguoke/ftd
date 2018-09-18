# -*- coding: utf-8 -*- 
import os

from io import BytesIO
from dtd_def import *
from file_util import *

ftd_type_template = './templates/type_def.template'
target_fname = 'DerivativeType.h'

def generate_type_df(version, types, target_path):
    template = load_template_file(ftd_type_template)
    d = {}
    def_type_statments = []
    def_ttype_statements = []
    for type in types:
        def_type_statments.append(type.get_tftd_def())
        def_ttype_statements.append(type.get_tt_def())
    d['version'] = version
    d['t_type_def'] = '\n'.join(def_type_statments)
    d['tt_type_def'] = '\n'.join(def_ttype_statements)
    save_cpp_file(template.format_map(d), '%s/%s'%(target_path, target_fname))
    
