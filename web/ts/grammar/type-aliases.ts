/**
 * 类型别名（Type Aliases）
 * TypeScript 允许你使用 `type` 关键字定义类型别名，便于为复杂的类型创建简洁的名称。
 * type 可以用来定义联合类型、交叉类型、元组类型等。
 */

type Name = string;
let personName: Name = "Alice"; // 这里 Name 是 string 的别名

/**
 * 对象类型别名
 * 类型别名与接口的对比
 * 接口（Interface） 主要用于定义对象、类和函数的结构，支持接口继承和扩展。
 * 类型别名（Type Alias） 更加灵活，除了支持对象、函数类型外，还支持联合类型、交叉类型、元组类型等。
 */
type Person = {
  name: string;
  age: number;
};

const user: Person = {
  name: "Alice",
  age: 30,
};

/**
 * 联合类型别名
 */
type ID = string | number;

let userId: ID = "abc123"; // 字符串类型
userId = 12345; // 数字类型

/**
 * 元组类型别名
 */
type Point = [number, number];

const p: Point = [10, 20]; // 合法

/**
 * 函数类型别名
 */
type Greet = (name: string) => string;

const greet: Greet = (name) => {
  return `Hello, ${name}`;
};

/**
 * 交叉类型（Intersection Types）
 * 交叉类型允许将多个类型合并成一个类型。类型别名非常适合用来定义交叉类型。
 */
type WorkerA = {
  jobTitle: string;
};

type Employee = Person & WorkerA; // 交叉类型，合并 Person 和 WorkerA

const emp: Employee = {
  name: "Alice",
  age: 30,
  jobTitle: "Software Engineer",
};
