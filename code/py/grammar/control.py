"""
控制语句
"""


def a(x):
    """
    条件语句 (if, elif, else)
    Python的条件语句结构与其他语言相似，主要使用if、elif（else if）和else来控制程序的执行流。
    不同的是，Python不使用大括号来表示代码块，而是依赖缩进。
    """
    if x > 0:
        print("x is positive")
    elif x == 0:
        print("x is zero")
    else:
        print("x is negative")


def b():
    """
    循环语句 (for, while, break, continue)
    """
    # 遍历列表
    for i in [1, 2, 3, 4, 5]:
        print(i)
    x = 0
    while x < 5:
        print(x)
        x += 1

    # break 示例
    for i in range(10):
        if i == 5:
            break
        print(i)  # 输出: 0, 1, 2, 3, 4

    # continue 示例
    for i in range(10):
        if i == 5:
            continue
        print(i)  # 输出: 0, 1, 2, 3, 4, 6, 7, 8, 9


def c():
    """
    pass 语句
    pass是一个空操作，通常用作占位符，表示“什么都不做”。它常用于需要代码块但不想实现内容的地方。
    """
    pass  # TODO: Implement later
