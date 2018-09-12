def parse_ftd_type_spec(basic_type_string):
    basic_t = ''
    size = 0
    precise = 0
    nodes = basic_type_string.split('<')
    basic_t = nodes[0].strip()
    if len(nodes) > 1:
        tail = nodes[1].replace('>', '')
        if tail.find(',') > 0:
            datas = tail.split(',')
            size = int(datas[0].strip())
            precise = int(datas[1].strip())
        else:
            size = int(tail.strip())
    return basic_t, size, precise

class TypeDTD:
    def __init__(self):
        self.base_type_name = ''
        self.name = ''
        self.length = 0
        self.precision = 0

    def get_tftd_def(self):
        template = "typedef {0} T{1};"
        return template.format(self.base_type_name.ljust(30), self.name)

    def get_tt_def(self):
        template = 'typedef {0} TT{1}{2};';
        type_name = ''
        name = self.name
        length_spec = ''

        h, l, p = parse_ftd_type_spec(self.base_type_name)
        if h == CHAR_TYPE or h == STRING_TYPE:
            type_name ='char'
        if h ==  NUMBER_TYPE or h == INT_TYPE:
            type_name = 'int'
        if h == FLOAT_TYPE:
            type_name = 'double'
        if h == WORD_TYPE:
            type_name = 'int16_t'
        if h == STRING_TYPE:
            length_spec = '[%d + 1]' % l
        return template.format(type_name.ljust(30), name, length_spec)


CHAR_TYPE = 'FTDCharType'
FLOAT_TYPE = 'FTDFloatType'
INT_TYPE = 'FTDIntType'
NUMBER_TYPE = 'FTDNumberType'
STRING_TYPE = 'FTDStringType'
WORD_TYPE = 'FTDWordType'




class ItemDTD:
    def __init__(self):
        self.name = ""
        self.comment = ""
        self.type_name = ""

    def get_item_tt_name(self):
        return 'TTItem' + self.name

    def get_item_t_name(self):
        return 'TItem' + self.name

    def get_t_item_define(self):
        template = 'typedef {0} TItem{1};';
        type_name = self.type_name;
        name = self.name;
        h, l, p = parse_ftd_type_spec(self.type_name)
        if (h != CHAR_TYPE and h != FLOAT_TYPE 
            and h != NUMBER_TYPE and h != STRING_TYPE
            and h != WORD_TYPE and h!= INT_TYPE): 
            type_name = 'T' + self.type_name
        return template.format(type_name.ljust(30), name)

        

        

    def get_tt_item_define(self):
        template = 'typedef {0} TTItem{1}{2};';
        type_name = '';
        name = self.name;
        length_spec ='';
        h, l, p = parse_ftd_type_spec(self.type_name)
        if (h != CHAR_TYPE and h != FLOAT_TYPE 
            and h != NUMBER_TYPE and h != STRING_TYPE
            and h != WORD_TYPE and h!= INT_TYPE): 
            type_name =  'TT' + self.type_name
        if h == CHAR_TYPE or h == STRING_TYPE:
            type_name ='char'
        if h ==  NUMBER_TYPE or h == INT_TYPE:
            type_name = 'int'
        if h == FLOAT_TYPE:
            type_name = 'double'
        if h == WORD_TYPE:
            type_name = 'int16_t'
        if h == STRING_TYPE:
            length_spec = '[%d + 1]' % l
        return template.format(type_name.ljust(30), name, length_spec)
          

    

    
class FieldDTD:
    def __init__(self):
        self.name = ""
        self.fid = ""
        self.fid_value = 0
        self.comment = ""
        self.item_names = []


class TIdDTD:
    def __init__(self):
        self.name = ""
        self.value = ""

class FieldInfo:
    def __init__(self):
        self.name = ''
        self.max_occur = 0
        self.min_occur = 0
        self.comment = ''

    def use_vector(self):
        return self.max_occur > 99

    def use_field(self):
        return self.max_occur == 1 and self.min_occur == 1

    def use_smart_ptr(self):
        return self.max_occur == 1 and self.min_occur == 0


class PackageDTD:
    def __init__(self):
        self.name = ''
        self.tid = ''
        self.model = ''
        self.comment = ''
        self.fields = []
