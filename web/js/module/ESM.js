/**
 * ES6模块（ECMAScript 6，2015年）
 * 随着JavaScript语言的标准化，ECMA决定引入原生的模块化支持，称为ES6模块（或ESM）。
 * 这一规范从根本上解决了JavaScript模块化的问题，为浏览器和Node.js提供了统一的模块化方式。
 * 支持静态导入，浏览器和构建工具可以在编译时做出优化。
 * 支持异步加载，import()语法允许动态加载模块。
 * 解决了跨平台的模块化问题，兼容浏览器和Node.js。
 */

/**
 * 命名导出 (named export)
 * 命名导出允许你导出一个或多个变量、函数或类，可以使用 export 关键字直接导出
 * 命名导出 允许你导出多个变量或函数，每个导出都要有一个名字。在导入时，你必须使用相同的名字来引用这些导出的内容
 */
// math.js

// 导出单个函数
export function add(a, b) {
  return a + b;
}

// 导出多个值
export const pi = 3.14159;
export class Circle {
  constructor(radius) {
    this.radius = radius;
  }
  area() {
    return pi * this.radius * this.radius;
  }
}

/**
 * 默认导出 (default export)
 * 默认导出用于导出模块的单一内容，可以是一个对象、函数、类等。每个模块只能有一个默认导出。
 * 默认导出 使用 export default 来导出。导入时，你可以使用任何名字来引用默认导出的内容。
 */
export default function multiply(a, b) {
    return a * b;
}

/**
 * 命名导入
 * 命名导入用于导入通过命名导出的模块内容。你必须使用与导出时相同的名字。
 * 也可以使用 as 关键字来重命名导入的模块成员
 */
import { add, pi } from './math.js';
import { originalName as newName } from 'module';
import { add as sum, subtract } from './math.js';

/**
 * 默认导入
 * 默认导入用于导入模块的默认导出内容。你可以为导入内容起一个任意的名字。
 */
import multiply from './calculator.js';

/**
 * 同时导入命名导出和默认导出
 */
import multiply, { add, pi } from './math.js';

/**
 * 导入整个模块为一个对象
 * 如何同时存在默认导出和命名导出
 * 通过math对象的属性进行访问，匿名默认导出通过math.default属性访问
 */
import * as math from './math.js';

/**
 * 导入 CDN 上的模块(使用 ESM 版本) 
 * 这种导入方式仅在 浏览器环境 中生效，通常是在<script type="module"> 标签使用
 * 这种导入方式必须满足以下几个条件
 * 确保是 ESM 格式的 CDN 版本
 * 支持 CORS，当你通过 import 从外部 URL 导入模块时，浏览器会检查该文件是否允许跨源请求。这通常需要 CORS（跨源资源共享） 头部的支持。
 */
import { debounce } from 'https://cdn.jsdelivr.net/npm/lodash-es@4.17.21/lodash.js';

/**
 * 动态导入
 * 使用 import() 函数来按需加载 JavaScript 模块
 * 它返回一个 Promise，支持异步操作，可以使用 then() 或 async/await 语法
 * 动态导入非常适合用于 懒加载、代码拆分 和 条件加载
 * 它允许你在应用中实现更精细的模块加载策略，从而提高页面的加载速度和性能
 */
const loadFeature = async () => {
    const featureModule = await import('./feature.js');
    featureModule.init();
}

// 动态导入的路径可以是一个变量，允许你动态选择需要加载的模块。这使得导入路径更加灵活：
const moduleName = './math.js';
import(moduleName).then(module => {
  console.log(module.add(2, 3));
});

/**
 * 文件后缀
 * 在 ESM（ECMAScript Modules） 模块导入中，必须指定文件的后缀，包括 .js 后缀，尤其是在浏览器环境中
 * 在 Node.js 中，默认情况下，不需要 指定 .js 后缀，尤其是当你使用 ESM 模块时（即 type: "module" 配置的情况下）。Node.js 会自动解析导入的模块文件，且在某些情况下可以省略 .js 后缀。
 * 对于 动态导入（import()）也是一样的要求，必须包括文件的后缀
 */