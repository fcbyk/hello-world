# JavaScript

## 发展历史
::: details 1995年：JavaScript的诞生
**创始人：** **Brendan Eich**，时任Netscape Communications的工程师。

**背景：** 为了支持网页动态效果，Netscape需要一种可以运行在浏览器中的脚本语言。Ei ch在Netscape的工作就是创造这门语言。

**首次发布：** 1995年，JavaScript首次作为Netscape Navigator浏览器的一个内置脚本语言发布。最初它被称为“LiveScript”，但为了与Java的知名度挂钩，后来改名为JavaScript。

**特点：** 最早的JavaScript仅支持基本的动态网页效果，如表单验证。
:::

::: details 1996年：ECMAScript规范的诞生
**ECMA成立：** 由于JavaScript的快速发展，Netscape与微软（Internet Explorer浏览器）等公司开始协作，推动了语言的标准化。1996年，ECMA国际组织（European Computer Manufacturers Association）成立了一个专门小组，致力于定义JavaScript的标准，称为ECMAScript。

**第一个标准：** **ECMA-262**，即**ECMAScript 1**（ES1），发布于1997年，标志着JavaScript语言的正式标准化。定义了核心语法和功能，如变量声明、基本数据类型、控制结构等。

**1998年 ES2：** 该版本主要是对ES1的修正和修订，增强了标准的一致性。

**1999年 ES3：** 添加了正则表达式、错误处理机制（`try/catch`）和更完善的字符串操作函数，标志着JavaScript的功能大幅提升，成为Web开发的核心工具。
:::

::: details 2005年：AJAX与Web 2.0
**AJAX的兴起：** 由于Google推出Gmail和Google Maps等应用，AJAX（Asynchronous JavaScript and XML）成为前端开发的标准技术。这使得JavaScript不仅仅限于页面动态效果，还能进行异步请求和动态数据加载，极大地改善了用户体验。

**Web 2.0时代：** JavaScript作为Web 2.0时代的核心技术之一，迎来了爆发式增长，开发者开始更加重视JavaScript的应用和性能。
:::
::: details 2009年：Node.js的发布
**Node.js：** Ryan Dahl发布了Node.js，使得JavaScript不再仅仅局限于浏览器端，开始进军服务器端。Node.js通过V8引擎提供高效的服务器端执行，使得JavaScript成为全栈开发的重要语言。

**ES5:** 增加了对严格模式（"use strict"）的支持，改进了数组处理方法，提供了`Object.defineProperty`等特性。ES5的规范更新使得JavaScript的行为更加一致，并得到浏览器厂商的普遍支持。
:::

::: details **2015年：ECMAScript 6（ES6，亦称ES2015）**
**重大突破：** 这是JavaScript历史上最重要的一次更新，引入了许多现代编程语言特性：
- **类（Classes）：** 提供了面向对象编程的支持。
- **模块（Modules）：** 引入了`import`和`export`语法，便于模块化开发。
- **箭头函数（Arrow Functions）：** 简化了函数的语法。
- **Promise：** 用于处理异步操作，解决了回调地狱问题。
- **模板字面量（Template Literals）：** 使字符串拼接更加方便。
- **let和const：** 提供了块级作用域的变量声明。
- **生成器（Generators）** 和 **Map/Set：** 引入新的数据结构。
:::

::: details  **2016年 往后: ES7 - ES14**
**ES2016（ES7）**
- **Array.prototype.includes：** 提供了更简洁的数组元素判断方式。
- **指数运算符（Exponentiation Operator）：** 引入`**`符号用于指数运算（例如：`2 ** 3`）。

**ES2017（ES8）：**
- **async/await：** 异步编程的新语法糖，使得处理异步操作更加直观和简洁。
- **Object.entries和Object.values：** 用于操作对象的键值对。

**ES2018（ES9）**
- **异步迭代器（Asynchronous Iterators）：** 允许异步迭代数据流。
- **正则表达式改进：** 支持`dotAll`标志和`lookbehind`断言等新特性。

**ES2019（ES10）**
- **Array.prototype.flat：** 扁平化数组。
- **Array.prototype.flatMap：** 映射并扁平化数组。
- **Object.fromEntries：** 将键值对数组转换为对象。

**ES2020（ES11）**
- **BigInt：** 允许表示非常大的整数。
- **Nullish Coalescing（??）：** 提供了默认值操作符，只有当值为`null`或`undefined`时才使用默认值。
- **Optional Chaining（?.）：** 支持链式调用时自动跳过`null`或`undefined`的值。

**ES2021（ES12）**
- **String.prototype.replaceAll：** 允许替换字符串中的所有匹配项。
- **Promise.any：** 返回第一个成功的Promise结果。
- **WeakRefs：** 提供对对象的弱引用。

**ES2022（ES13）**
- **Top-level Await：** 支持在模块顶层直接使用`await`。
- **Class Fields：** 类字段的公共和私有属性支持。
- **Error Cause：** 错误对象新增`cause`属性。

**ES2023（ES14）**
- **Array.findLast和Array.findLastIndex：** 支持从数组末尾查找元素。
- **Hashbang Syntax：** 允许在JavaScript文件顶部使用`#!/`来指定文件的解释器。
- **Import Assertions：** 允许在`import`语句中指定额外的类型信息。
:::

## 模块化