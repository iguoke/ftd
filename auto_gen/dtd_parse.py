from dtd_def import *
from lxml import etree as ET
from io import BytesIO
from collections import OrderedDict

def get_ftd_type_spec(xml_string):
    return xml_string.replace('&lt;', '<').replace('&mt;', '>')


def load_type_node(node):
    type = TypeDTD()
    type.name = node.get('name')
    type.base_type_name = get_ftd_type_spec(node.get('baseType'))
    type.length = int(node.get('length'))
    type.precision = int(node.get('precision'))
    return type

def load_item_node(node):
    item = ItemDTD()
    item.name = node.get('name')
    item.type_name = node.get('type')
    item.comment = node.get('comment')
    return item

def load_package_node(node):
    item = PackageDTD()
    item.name = node.get('name')
    item.tid = node.get('tid')
    item.model = node.get('model')
    item.comment = node.get('comment')
    item.fields = []
    if item.tid.split('_')[1] == item.name:
        item.same_as_id = True
    else:
        item.same_as_id = False
    for child in list(node.iter()):
        if child.tag == 'field':
            field_info = FieldInfo()
            field_info.name = child.get('name')
            max_occur = child.get('maxOccur')
            if max_occur == '任意':
                field_info.max_occur = 999
            else:
                field_info.max_occur = int(max_occur)
            field_info.min_occur = int(child.get('minOccur'))
            field_info.comment = child.get('comment')
            item.fields.append(field_info)
    return item


def load_field_node(f):
    field = FieldDTD()
    field.name = f.get('name')
    field.fid = f.get('fid')
    field.fid_value = f.get('fidValue')
    field.comment = f.get('comment')
    for child in list(f.iter()):
        if child.tag == 'item':
            field.item_names.append(child.get('name'))
    return field

def load_tid_node(t):
    tid = TIdDTD()
    tid.name = t.get('name')
    tid.value = t.get('value')
    return tid

def load_dtd_file_fields(path, file):
    file = path + file
    tree = ET.parse(file)
    root = tree.getroot()

    types = OrderedDict()
    items = OrderedDict()
    fields = OrderedDict()
    packages = OrderedDict()
    tids = OrderedDict()

    packages_node = root.find('packages')    
    for p in packages_node.findall('packageDefine'):
        package = load_package_node(p)
        if package is not None:
            packages[package.name] = package

    fields_node = root.find('fields')    
    for f in fields_node.findall('fieldDefine'):
        field = load_field_node(f)
        if field is not None:
            fields[field.name] = field

    items_node = root.find('items')    
    for i in items_node.findall('itemDefine'):
        item = load_item_node(i)
        if item is not None:
            items[item.name] = item

    types_node = root.find('types')    
    for t in types_node.findall('typeDefine'):
        type = load_type_node(t)
        if type is not None:
            types[type.name] = type

    tids_node = root.find('tids')
    for t in tids_node.findall('tidDefine'):
        tid = load_tid_node(t)
        if tid is not None:
            tids[tid.name] = tid

    return types, items, fields, packages, tids