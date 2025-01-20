<script setup>
import history from './../.vitepress/data/cpp'
</script>
# C++
## 发展历史
<HistoryDialog :history/>

## 语法

### 函数
C++ 在函数方面相较于 C 语言，提供了更强大、更灵活的特性，
如函数重载、默认参数值、引用传递、函数模板、虚函数、多态等，
这些特性使得 C++ 更加适合面向对象编程和现代软件开发。
::: code-group
<<< @/../code/cpp/grammar/function.cpp#Overloading [函数重载]
<<< @/../code/cpp/grammar/function.cpp#Default [默认参数值]
::: 

### 模板
::: code-group
<<< @/../code/cpp/grammar/template.cpp#template1 [函数模板]
<<< @/../code/cpp/grammar/template.cpp#template3 [类模板]
<<< @/../code/cpp/grammar/template.cpp#template2 [类型推导]
::: 

### 运算符
::: code-group
<<< @/../code/cpp/grammar/operator.cpp [运算符重载]
::: 

## STL
C++ 的 STL（Standard Template Library，标准模板库）是 C++ 标准库的一部分，提供了一些常用的数据结构和算法。
STL 是 C++ 标准库的一种实现方式，包含了多个模板类和算法，用于简化和高效地处理常见的编程任务。

### 容器
<<< @/../code/cpp/api/stl/index.cpp#containers

### 迭代器
<<< @/../code/cpp/api/stl/index.cpp#iterators

### 算法
<<< @/../code/cpp/api/stl/index.cpp#algorithms

### 仿函数
<<< @/../code/cpp/api/stl/index.cpp#functionObjects
