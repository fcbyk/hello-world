"""
每个 .py 文件在 Python 中都被视为一个模块。
模块是 Python 中组织代码的一种方式，可以是一个 Python 文件，也可以是包含多个 Python 文件的目录（即包）。
"""

'''
如果你直接运行一个 Python 文件（例如 python module.py），那么这个文件会被当作主程序运行，__name__ 的值会被设置为 "__main__"
如果你将该文件作为模块导入到其他 Python 文件中（例如 import module），那么 __name__ 的值会是模块的名称（如 module）
'''
print(f"当前模块名称为 {__name__}")
