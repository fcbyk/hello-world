"""
数据类型
Python 提供了丰富的内置数据类型来支持不同的数据表示。
数字类型：int, float, complex
序列类型：str, list, tuple, range
集合类型：set, frozenset
映射类型：dict
布尔类型：bool
二进制类型：bytes, bytearray, memoryview
特殊类型：None
"""


def numericTypes():
    x = 42  # 整数
    y = -100  # 负整数

    a = 3.14  # 浮动小数
    b = -0.001  # 负浮动小数
    c = 1.5e2  # 科学记数法，等于 150.0

    z = 2 + 3j  # 复数


def sequenceTypes():
    """
    Python 中有几种常用的序列类型，它们都可以通过索引来访问元素。
    """

    '''
    字符串类型（str）
    用于表示文本，字符串是不可变的。
    可以用单引号或双引号表示字符串。
    '''
    name = "Alice"
    greeting = 'Hello, World!'

    '''
    列表类型（list）
    列表是有序的元素集合，可以包含不同类型的元素。
    列表是可变的，可以修改其中的元素。
    '''
    fruits = ["apple", "banana", "cherry"]
    numbers = [1, 2, 3, 4, 5]
    mixed_list = [1, "hello", 3.14, True]

    '''
    元组类型（tuple）
    元组是有序的元素集合，与列表类似，但元组是 不可变 的。
    '''
    coordinates = (10, 20, 30)
    colors = ("red", "green", "blue")

    '''
    范围类型（range）
    用于生成一个不可变的数值序列，通常用于循环迭代。
    '''
    r = range(5)  # 生成 0 到 4 的序列
    for i in r:
        print(i)


def setTypes():
    """
    集合类型（set）
    集合是无序的元素集合，且每个元素都是唯一的。
    集合支持常见的数学操作，如并集、交集、差集等。
    """
    fruits = {"apple", "banana", "cherry"}
    numbers = {1, 2, 3, 4, 5}

    '''
    冻结集合类型（frozenset）
    冻结集合是不可变版本的集合，元素一旦添加到集合中就不能修改。
    '''
    frozen_fruits = frozenset({"apple", "banana", "cherry"})


def mappingTypes():
    """
    字典类型（dict）
    字典是一种无序的键值对集合，每个键是唯一的，通常用于存储和查找关联数据。
    字典是可变的，可以通过键来访问值。
    """
    person = {"name": "Alice", "age": 25, "city": "New York"}
    print(person)
    person["age"] = 26  # 修改字典中的值


def booleanType():
    """
    布尔类型（bool）
    布尔类型用于表示逻辑值，只有两个取值：True 或 False。
    常用于条件判断和逻辑运算。
    """
    is_active = True
    is_finished = False


def binaryTypes():
    """
    bytes 类型
    用于表示不可变的字节序列。
    """
    b = b"Hello"

    # bytearray 类型，与 bytes 类似，但 bytearray 是可变的。
    b_array = bytearray([65, 66, 67])  # 等同于 b'ABC'

    # memoryview 类型，用于查看和操作字节数据的切片，节省内存。
    m = memoryview(b"Hello")
    print(m[0])  # 输出 72 (ASCII码值)


"""
None 类型
None 是一个特殊的常量，用来表示“没有值”或“空值”。
它通常用于函数没有返回值的情况，或作为初始化值。
"""
a = None
