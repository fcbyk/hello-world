# C语言

## 发展历史
- 1960：Algol 60 语言发布，作为 C 语言的间接祖先，提出了结构化编程的理念。
- 1967：Martin Richards 开发了 BCPL（Basic Combined Programming Language），一种简化的编程语言，为 C 的设计提供了灵感。
- 1970：Ken Thompson 开发了 B 语言（基于 BCPL），用于 Unix 操作系统的早期开发。
- 1972：Dennis Ritchie 在贝尔实验室基于 B 语言开发了 C 语言。C 语言的主要目标是为 Unix 操作系统提供高效的编程工具。
- 1973：Unix 操作系统的大部分被用 C 语言重写，这奠定了 C 的地位。C 开始展现出作为系统级编程语言的强大能力。
- 1978：Brian Kernighan 和 Dennis Ritchie 合著的 《The C Programming Language》（K&R 版 C 语言手册） 发布，成为 C 语言的权威指南。
该版本被称为 K&R C，是 C 语言的第一个广泛传播的标准。
- 1983：美国国家标准协会（ANSI）成立了 C 语言标准委员会（X3J11），以规范 C 语言的实现。
- 1989：ANSI 发布了第一个 C 语言标准，称为 ANSI C（或 C89）。C89 为 C 语言引入了许多规范化特性，成为现代 C 语言的基础。
- 1990：国际标准化组织（ISO）采纳 ANSI C，并发布了等效的 ISO C 标准，称为 C90。
- 1995：ISO 发布了一个小型修订版 C95，为 C90 增加了一些小的改进，例如宽字符支持。
- 1999：ISO 发布了 C99 标准，增加了许多新特性。
- 2011：ISO 发布了 C11 标准，进一步改进了语言的功能和安全性。
- 2007-2011：C11 的开发过程中，吸收了许多其他语言的经验（如 C++ 和 Java），但仍保持 C 的简洁性。
- 2018：ISO 发布了 C17 标准（又称为 C18），主要是 C11 的小修订版本，修复了一些技术问题。
- 2023：C23 标准发布，引入更多现代化特性，增强语言的可用性和兼容性。

## 环境搭建
[MinGW](https://www.mingw-w64.org/downloads/)<span style="margin-right:0.5rem"></span>
[CLion](https://www.jetbrains.com/clion/)<span style="margin-right:0.5rem"></span>
[在线编译](https://www.jyshare.com/compile/11/)
::: code-group
```powershell [window]
# 下载编译器，并配置环境变量
# MinGW（Minimalist GNU for Windows）提供了 GCC 编译器
gcc --version
```
```sh [linux]
# 大多数 Linux 发行版默认都包含了基础的 C 语言工具
gcc --version
```
:::

## 语法速通

### 相关文件
- 头文件
    - 头文件用于使多个源文件之间可以共享函数声明和宏定义等公共信息
    - 头文件只写声明，在源文件写实现
::: code-group
<<< @/../code/c/header/header.h#index{c}
<<< @/../code/c/header/test_header_run.c#index [main.c]
<<< @/../code/c/header/test_header.c [implement.c]
:::
- 源文件
::: code-group
<<< @/../code/c/grammar/scope.c#global [全局作用域]
<<< @/../code/c/grammar/scope.c#local [局部作用域]
<<< @/../code/c/grammar/scope.c#block [块作用域]
:::

### 注释
<<< @/../code/c/grammar/comment.c

### 数据类型
- 基础数据类型
::: code-group
<<< @/../code/c/grammar/type.c#int [整型]
<<< @/../code/c/grammar/type.c#float [浮点型]
<<< @/../code/c/grammar/type.c#char [字符型]
<<< @/../code/c/grammar/type.c#bool [布尔型]
:::
- 派生数据类型
::: code-group
<<< @/../code/c/grammar/type.c#arr [数组]
<<< @/../code/c/grammar/type.c#struct [结构体]
<<< @/../code/c/grammar/type.c#p [指针]
<<< @/../code/c/grammar/type.c#enum [枚举]
<<< @/../code/c/grammar/type.c#union [共用体]
:::
- 其他类型

<<< @/../code/c/grammar/type.c#typedef

### 控制语句
- 分支
::: code-group
<<< @/../code/c/grammar/control.c#if [if]
<<< @/../code/c/grammar/control.c#switch [switch]
:::
- 循环
::: code-group
<<< @/../code/c/grammar/control.c#for [for]
<<< @/../code/c/grammar/control.c#while [while]
:::
- 跳转
::: code-group
<<< @/../code/c/grammar/control.c#goto [goto]
<<< @/../code/c/grammar/control.c#return [return]
<<< @/../code/c/grammar/control.c#break [break]
<<< @/../code/c/grammar/control.c#continue [continue]
:::