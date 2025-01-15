/**
 * CommonJS（2009年，Node.js)
 * 由于JavaScript语言本身并不提供原生的模块化支持，因此Node.js的作者Ryan Dahl提出了CommonJS模块规范。
 * CommonJS的核心思想：每个文件就是一个模块，通过 require 加载其他模块，通过 module.exports 导出模块功能。
 * CommonJS使得Node.js能够在服务器端使用模块化，适用于同步加载模块的场景，但由于其同步特性并不适用于浏览器。
 */

// #region module
/**
 * module 对象
 * 每个文件在 Node.js 中都拥有一个 module 对象
 * 这个对象用于管理模块的导出、模块的名称、模块的文件路径等信息。
 */

/**
 * module.exports 是一个关键属性
 * 允许你导出模块的内容。在 Node.js 中，当你通过 require 引入一个模块时，返回的就是 module.exports 对象的内容。
 */
module.exports.add = function(a, b) {
    return a + b;
  };
  
module.exports.subtract = function(a, b) {
    return a - b;
};

// 这里覆盖了之前的导出
module.exports = {
    // 新的导出内容
};

/**
 * 其他常用属性
 */
console.log(module.filename); // 输出当前文件的完整路径
console.log(module.id); // 输出当前模块的唯一标识符
// #endregion module

// #region exports
/**
 * exports
 * exports 是 module.exports 的快捷引用。它们实际上指向同一个对象
 */

// 这相当于往上面的空对象添加了方法
exports.add = function(a, b) {
    return a + b;
};

exports.subtract = function(a, b) {
    return a - b;
};

// 错误做法，这种做法使exports引用地址改变了
// 下面的对象不会导出
exports = {
    add: function(a, b) { return a + b; }
};
// #endregion exports

// #region require
/**
 * 导入
 * require() 是 Node.js 提供的一个全局函数
 * 用于同步地加载外部模块，并返回该模块的 module.exports 对象。
 * 通过 require() 函数，可以加载和使用本地模块、核心模块或第三方模块。
 */

const fs = require('fs');  // 加载 Node.js 的文件系统模块
const math = require('./math');  // 假设 math.js 存在，加载当前目录下的 math.js 文件
const express = require('express');  // 加载 npm 安装的 express 模块
// #endregion require


/**
 * 缓存机制
 * 当模块第一次被加载时，它的内容会被执行一次，并且模块会被缓存到 require.cache 中。
 * 后续对相同模块的 require 调用会直接从缓存中获取。
 */
// a.js
console.log('Module a is loaded');
module.exports = 'This is module a';

// b.js
const a = require('./a');
console.log(a);  // 输出: "This is module a"

// 再次 require('./a') 时不会再次输出 'Module a is loaded'
const b = require('./a');