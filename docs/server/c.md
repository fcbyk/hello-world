<script setup>
import history from './../.vitepress/data/c'
</script>

# C语言

## 发展历史

<HistoryDialog :history/>

## 环境搭建
<LinkBtn text="MinGW" url="https://www.mingw-w64.org/downloads/"/>
<LinkBtn text="CLion" url="https://www.jetbrains.com/clion/"/>
<LinkBtn text="在线编译" url="https://www.jyshare.com/compile/11/"/>

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

## 语法

### 相关文件
- 头文件
    - 头文件用于使多个源文件之间可以共享函数声明和宏定义等公共信息
    - 头文件只写声明，在源文件写实现
::: code-group
<<< @/../code/c/files/header_files.h#index{c}
<<< @/../code/c/files/others.c#index [main.c]
<<< @/../code/c/files/source_files.c [implement.c]
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