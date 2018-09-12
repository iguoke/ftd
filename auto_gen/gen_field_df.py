# -*- coding: utf-8 -*-
import os

from io import BytesIO
from dtd_def import *
from file_util import *

field_struct_template_file = './templates/field_struct.template'

fields_include_template_file = './templates/fields.template'

include_all_headers = 'Fields.h'


def get_ftd_type_name(item_name):
    return 'TItem%s' % item_name

def get_true_type_name(item_name):
    return 'TTItem%s' % item_name

def get_field_item_var_name(item_name):
    return item_name[0].lower() + item_name[1:]




def generate_field_struct(version, field_info, target_path):
    template = load_template_file(field_struct_template_file)
    field_name_upper = field_info.name.upper()
    property_type_var_pair_list= []
    declare_statment_template = "{0} {1};"
    for property in field_info.item_names:
        property_type_var_pair_list.append(
            declare_statment_template.format(get_true_type_name(property),
                                         get_field_item_var_name(property)))

    item_var_pair_list_string = add_whitespaces('\n'.join(property_type_var_pair_list),4)

    write_line1 = "{0}::writeBuffer(field.{1}, buffer);"
    write_line2 = "buffer += {0}::getMsgLength();"
    write_line3 = "data_length += {0}::getMsgLength();"
    write_lines = []
    for property in field_info.item_names:
        write_lines.append(write_line1.format(get_ftd_type_name(property), get_field_item_var_name(property)))
        write_lines.append(write_line2.format(get_ftd_type_name(property)))
        write_lines.append(write_line3.format(get_ftd_type_name(property)))
    write_lines = [line for line in write_lines]
    write_items_string = add_whitespaces('\n'.join(write_lines),8)

    read_line1 = "{0}::readBuffer(buffer, field.{1});"
    read_line2 = "buffer += {0}::getMsgLength();"
    read_line3 = "data_length += {0}::getMsgLength();"
    read_lines = []
    for property in field_info.item_names:
        read_lines.append(read_line1.format(get_ftd_type_name(property), get_field_item_var_name(property)))
        read_lines.append(read_line2.format(get_ftd_type_name(property)))
        read_lines.append(read_line3.format(get_ftd_type_name(property)))
    read_lines = [line for line in read_lines]
    read_items_string = add_whitespaces('\n'.join(read_lines), 8)

    d = {}
    d['version'] = version
    d['field_name_upper'] = field_name_upper
    d['field_name'] = field_info.name
    d['item_type_var_pair_list_string'] = item_var_pair_list_string
    d['write_items_string'] = write_items_string
    d['read_items_string'] = read_items_string

    target_fpath = '{0}/{1}/{2}.h'.format(target_path, version,field_info.name) 
    save_cpp_file(template.format_map(d), target_fpath)


def generate_fields_include(version, fields, target_path):
    template = load_template_file(fields_include_template_file)
    include_lines = []
    member_lines = []
    case_lines = []
    ptr_lines = []
    include_template = '#include "{0}.h"'
    memeber_template = ' '*4 + '{0} {1};'
    ptr_template = '    DECLARE_PTR({0})'
    case_template ="""    case(FID_{0}):
    {{
	    {0}Helper::readBuffer(buffer, field.{1}, readLen);
	    break;
    }}"""
    for field in fields:
        include_lines.append(include_template.format(field.name))
        member_lines.append(memeber_template.format(field.name.ljust(30), field.name[0].lower()+field.name[1:]))
        case_lines.append(case_template.format(field.name, field.name[0].lower()+field.name[1:]))
        ptr_lines.append(ptr_template.format(field.name))
    d = {}
    
    d['version'] = version
    d['include_file_headers'] = '\n'.join(include_lines)
    d['field_members'] = '\n'.join(member_lines)
    d['cases'] = '\n'.join(case_lines)
    d['declare_smart_ptr_lines'] = '\n'.join(ptr_lines)
    save_cpp_file(template.format_map(d),
                  '{0}/{1}/{2}'.format(target_path, version,include_all_headers))




    

        



