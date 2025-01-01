/**
 * 类型注解（Type Annotations）
 * 类型注解 是 TypeScript 中用于显式声明变量、函数参数、函数返回值、类属性等的类型的方式。
 * 通过类型注解，开发人员能够明确指定变量或函数的预期类型，从而提供类型安全、提高代码可读性，并减少潜在的错误。
 */

/**
 * 类型注解的基本语法
 * 类型注解通过冒号 : 后跟类型来完成，通常用于声明变量或函数的类型。
 */
let num: number = 42;
let str: string = "Hello, TypeScript!";
let isActive: boolean = true;

/**
 * 在函数中使用类型注解
 * 括号后面的: number是返回值
 */
function add(a: number, b: number): number {
  return a + b;
}
// 如果函数没有返回值，可以使用 void 类型
function greet(name: string): string {
  return `Hello, ${name}`;
}

// TypeScript 允许在函数参数中使用可选参数（?）和默认值。
// age?: number 表示 age 参数是可选的。
// 如果没有传递 age 参数，默认值是 undefined，函数体内通过 age || "unknown" 来处理。
function greetA(name: string, age?: number): string {
  return `Hello, ${name}. You are ${age || "unknown"} years old.`;
}

/**
 * 函数的类型注解
 * TypeScript 支持为函数声明提供完整的类型注解，包括参数类型和返回值类型
 * : (a: number, b: number) => number 是函数类型注解，
 * 表示 multiply 是一个接收两个 number 类型参数并返回一个 number 类型结果的函数。。
 */
let multiply: (a: number, b: number) => number = (a, b) => a * b;

/**
 * 数组和元组的类型注解
 * 对于数组，可以使用 [] 来指定数组中元素的类型。
 * 元组（Tuple）是一种可以包含不同类型元素的数组类型。元组的类型注解可以显式指定每个元素的类型。
 * [string, number] 表示 person 是一个元组，第一个元素是字符串类型，第二个元素是数字类型。
 */
let nums: number[] = [1, 2, 3, 4];
let strs: Array<string> = ["apple", "banana", "cherry"];
let personA: [string, number] = ["Alice", 30];

/**
 * 对象的类型注解
 * 对象的类型注解用来描述一个对象的结构，明确对象的每个属性的类型
 */
let personB: { name: string; age: number } = { name: "Alice", age: 30 };

// 接口（interface）
// 接口（interface）可以用来描述对象的结构，尤其是当多个对象具有相同的结构时，接口的使用使得类型注解更加简洁和可维护。
interface Person {
  name: string;
  age: number;
  skills?: string[];
}

let personC: Person = { name: "Alice", age: 30 };

/**
 * 类型注解与类型推断
 * TypeScript 有强大的 类型推断 功能，它可以根据你赋值给变量的值来自动推断该变量的类型。
 * 因此，许多时候你可以省略类型注解，TypeScript 会自动推断类型。
 */
let nu = 42; // TypeScript 推断 nu 的类型为 number
let st = "Hello, World!"; // TypeScript 推断 st 的类型为 string


/**
 * 联合类型（Union Types）
 * 通过 |，你可以让一个变量同时支持多种类型，这种类型叫做联合类型。
 * string | number 表示 value 可以是字符串类型或数字类型。
 */
let value: string | number;
value = "Hello";
value = 42;

/**
 * 字面量类型（Literal Types）
 * 字面量类型允许你指定变量只能是某些特定的值，这是一种更精确的类型注解。
 * color 只能是 "red"、"green" 或 "blue" 中的一个值。
 */
let color: "red" | "green" | "blue" = "red";

/**
 * any 类型
 * any 类型表示可以接受任意类型的值。虽然 any 可以绕过类型检查，但过度使用 any 会丧失 TypeScript 的类型安全性，因此应谨慎使用。
 */
let valueA: any = "Hello";
valueA = 42;  // 仍然有效，类型可以是任何类型

/**
 * unknown 类型
 * unknown 类型是比 any 更安全的类型，表示未知类型的值。与 any 类型不同，unknown 类型的值不能直接进行操作，必须先进行类型检查。
 * 必须先进行类型检查或类型断言后才能操作 unknown 类型的变量。
 */
let valueC: unknown = "Hello";
// value.toUpperCase();  // 错误：类型 'unknown' 的对象不能执行 'toUpperCase' 操作

/**
 * 类型断言（Type Assertion）
 * 类型断言允许你告诉 TypeScript 你知道变量的类型是什么，从而绕过类型检查。
 */
let valueD: unknown = "Hello, TypeScript!";
let strA: string = valueD as string;  // 类型断言，告诉 TypeScript valueD 是 string 类型
