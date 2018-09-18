# -*- coding: utf-8 -*- 
import os

from io import BytesIO
from dtd_def import *
from file_util import *

ftd_type_template = './templates/item_def.template'
target_fname = 'ItemType.h'

def generate_item_df(version, items, target_path):
    template = load_template_file(ftd_type_template)
    d = {}
    def_type_statments = []
    def_ttype_statements = []
    for item in items:
        def_type_statments.append(item.get_t_item_define())
        def_ttype_statements.append(item.get_tt_item_define())
    d['version'] = version
    d['t_type_def'] = '\n'.join(def_type_statments)
    d['tt_type_def'] = '\n'.join(def_ttype_statements)
    save_cpp_file(template.format_map(d), '%s/%s'%(target_path, target_fname))