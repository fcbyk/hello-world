/**
 * 接口（Interfaces）
 * 接口（Interface） 是 TypeScript 中的一个核心特性，它用于定义对象、类、函数等的结构（即它们的属性和方法）。
 * 接口通过规定结构和类型来帮助开发者约束代码的行为，确保在使用时对象符合某个预定的结构。
 * 与类型别名（type）类似，接口也能够描述数据的形状，但接口在 TypeScript 中更专注于面向对象的设计，且它具有一些额外的功能，比如可以扩展（继承）其他接口。
 */

interface Person {
  name: string;
  age: number;

  // 在接口中，某些属性可以是可选的。使用 ? 来标记这些属性为可选。
  address?: string;

  // 接口中的属性可以是只读的，意味着它们在对象创建后不能被修改。使用 readonly 关键字标记只读属性。
  readonly id?: number;
}

let person: Person = { id: 1, name: "Alice", age: 30 };
person.name = "Bob"; // 允许修改
person.age = 35; // 允许修改
// person.id = 2; // 错误：无法修改 readonly 属性

/**
 * 接口可以描述函数
 * 接口不仅可以用于描述对象的结构，还可以用来描述函数的类型。通过接口来定义一个函数的签名（即参数类型和返回值类型）。
 */
interface Greet {
  (name: string): string;
}
const greet: Greet = (name) => {
  return `Hello, ${name}`;
};

/**
 * 接口继承(支持多继承)
 * 接口可以继承自其他接口。继承可以让一个接口继承另一个接口的所有属性和方法，也可以在继承的基础上添加新的属性或方法。
 */
interface Address {
  street: string;
  city: string;
}

interface Employee extends Person, Address {
  jobTitle: string;
}

let employee: Employee = {
  id: 12,
  name: "Alice",
  age: 30,
  jobTitle: "Software Engineer",
  street: "123 Main St",
  city: "Wonderland",
};

/**
 * 接口与类的结合(和Java类似)
 * 接口在 TypeScript 中与类的结合非常常见。类可以实现（implements）接口，以确保类遵守接口所定义的结构。
 * EmployeeA 类实现了 Person 接口，类必须提供接口中声明的所有属性和方法（如果有的话）。
 * 通过 implements 关键字来让类实现接口。
 * 类也可以实现多个接口，这样它可以同时遵守多个接口的结构。
 */
class EmployeeA implements Person {
  constructor(
    public name: string,
    public age: number,
    public jobTitle: string,
    public id: number
  ) {}

  getDetails(): string {
    return `${this.name}, ${this.age} years old, ${this.jobTitle}`;
  }
}

let employeeA = new EmployeeA("Alice", 30, "Software Engineer", 1);
console.log(employeeA.getDetails());

/**
 * 索引签名（Index Signature）
 * 接口可以通过索引签名来表示一个对象的动态属性。例如，如果你不知道对象可能有哪些属性，但你知道它们的类型，可以使用索引签名来描述。
 */
interface Dictionary {
  // [key: string]: number 表示 Dictionary 接口的任何属性名都是 string 类型，且它们的值是 number 类型。
  [key: string]: number;
}

let dictionary: Dictionary = {
  apple: 3,
  banana: 5,
  cherry: 7,
};

/**
 * 混合类型接口
 * TypeScript 中的接口不仅仅限于对象的结构，还可以描述混合类型。可以定义一个既有方法，又有属性的接口。
 * Counter 接口同时定义了一个调用签名（函数类型）和一个属性（interval）。
 */
interface Counter {
  (start: number): void; // 调用签名
  interval?: number; // 属性
}

let counter: Counter = (start: number) => {
  console.log("Counting from", start);
};
counter.interval = 1000; // 设置 interval 属性

/**
 * 接口合并（Declaration Merging）
 * TypeScript 的接口支持声明合并（Declaration Merging），意味着你可以在不同地方定义同一个接口，TypeScript 会将它们合并成一个接口。
 */
interface Person {
  name: string;
}

interface Person {
  age: number;
}

// 两个 Person 接口会合并成一个，最终的接口有 name 和 age 两个属性。
const personD: Person = {
  name: "Alice",
  age: 30,
};

