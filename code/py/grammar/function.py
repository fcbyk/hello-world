"""
函数
"""


def greet(name_):
    """
    定义函数
    在 Python 中，使用 def 关键字来定义函数。
    def 是定义函数的关键字。
    greet 是函数名，name_ 是函数的参数。
    Python 中没有强制要求声明返回类型。
    """
    print(f"Hello, {name_}!")


'''
调用函数
和其他语言无差
调用函数时，直接使用函数名并传递参数。
'''
greet("Alice")


def add(a, b):
    """
    使用 return 语句返回值。函数可以返回任意类型的值，甚至可以返回多个值（作为元组）。
    """
    return a + b


result = add(2, 3)
print(result)  # 输出 5


def get_info():
    """
    如果返回多个值
    """
    return "Alice", 25  # 返回元组


name, age = get_info()
print(name, age)  # 输出 Alice 25


def greet(name_="Guest"):
    """
    Python 支持函数的默认参数值。如果调用函数时没有传递某个参数，Python 会使用默认值。
    在Python中，函数是可以重新定义的。当你定义一个函数时，它会覆盖之前同名的函数定义。
    这意味着，如果你多次定义同名函数，后面的定义会覆盖前面的定义，导致前面的定义失效。
    """
    print(f"Hello, {name_}!")


greet()  # 使用默认值 "Guest"
greet("Alice")  # 使用传入的值 "Alice"


def greet(name_, message="Hello"):
    """
    Python 支持关键字参数，即在调用函数时通过指定参数名来传递参数，这使得传参顺序不重要。
    """
    print(f"{message}, {name_}!")


greet("Alice", message="Good morning")  # 输出 Good morning, Alice!
greet(name_="Bob")  # 输出 Hello, Bob!


def apply_function(f, x):
    return f(x)


def square(x):
    return x * x


'''
函数作为参数（高阶函数）
Python 允许将函数作为参数传递给另一个函数
'''
result = apply_function(square, 5)
print(result)  # 输出 25

'''
匿名函数（Lambda 函数）
Python 提供了 lambda 关键字来定义匿名函数（即没有名字的函数）
'''
print((lambda x: x * x)(5))  # 输出 25

