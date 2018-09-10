# -*- coding: utf-8 -*-
import os
field_struct_template_file = './template/field_struct.template'

def load_template_file(fname):
    result =  []
    with   open(fname,'r') as f:
        result = [line for line in f.readlines()]
    return '\n'.join(result)
               

class PropertyDTD:
    def __init__(self):
        self.property_name = ""

    def get_ftd_type_name(self):
        return 'TProperty%s' % self.property_name

    def get_true_type_name(self):
        return 'TTProperty%s' % self.property_name

    def get_struct_propery_name(self):
        return self.property_name[0].lower() + self.property_name[1:]

    
class FieldDTD:
    def __init__(self):
        self.field_name = ""
        self.property_names = []




def generate_field_struct(version, field_info):
    template = load_template_file(field_struct_template_file)
    field_name_upper = field_info.field_name.upper()
    property_type_var_pair_list= []
    declare_statment_template = ' ' *12 + "{0} {1};"
    for property in field_info.property_names:
        property_type_var_pair_list.append(
            declare_statment_template.format(get_true_type_name(property),
                                         get_struct_propery_name(property)))

    property_type_var_pair_list_string = '\n'.join(property_type_var_pair_list)

    write_line1 = "{0}::writeBuffer(field.{1}, buffer);"
    write_line2 = "buffer += {0}::getMsgLength();"
    write_line3 = "data_length += {0}::getMsgLength();"
    write_lines = []
    for property in field_info.property_names:
        write_lines.append(write_line1.format(get_ftd_type_name(property_name), get_struct_propery_name(property)))
        write_lines.append(write_line2.format(get_ftd_type_name(property_name)))
        write_lines.append(write_line3.format(get_ftd_type_name(property_name)))
    write_lines = [' ' * 12 + line for line in write_lines]
    write_properties_string = '\n'.join(write_lines)

    read_line1 = "{0}::readBuffer(buffer, field.{1});"
    read_line2 = "buffer += {0}::getMsgLength();"
    read_line3 = "data_length += {0}::getMsgLength();"
    read_lines = []
    for property in field_info.property_names:
        read_lines.append(read_line1.format(get_ftd_type_name(property_name), get_struct_propery_name(property)))
        read_lines.append(read_line2.format(get_ftd_type_name(property_name)))
        read_lines.append(read_line3.format(get_ftd_type_name(property_name)))
    read_lines = [' ' * 12 + line for line in write_lines]
    read_properties_string = '\n'.join(write_lines)

    d = {}
    d['version'] = version
    d['field_name_upper'] = field_name_upper
    d['field_name'] = field_info.field_name
    d['property_type_var_pair_list_string'] = property_type_var_pair_list_string
    d['write_properties_string'] = write_properties_string
    d['read_properties_string'] = read_properties_string

    if not os.path.exists(version):
        os.mkdir(version)

    

        



