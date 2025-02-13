"""
作用域（Scope）
Python遵循LEGB规则来查找变量的作用域：
L (Local)：局部作用域，函数或方法内部定义的变量。
E (Enclosing)：外部作用域，指的是函数内部嵌套的函数中的变量。
G (Global)：全局作用域，指的是模块级别的变量。
B (Built-in)：内建作用域，Python自带的标准库和内建函数（如print、len等）。
"""
x = 10  # Global scope


def outer():
    x = 20  # Enclosing scope

    def inner():
        x = 30  # Local scope
        print(x)  # Local scope value is used

    inner()


outer()
