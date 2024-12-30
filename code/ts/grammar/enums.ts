/**
 * 枚举（Enums）
 * 枚举（Enum） 是 TypeScript 中的一种特殊类型，
 * 它允许我们为一组数值或字符串创建一个命名的集合。枚举通常用于表示一组固定的常量，使代码更加清晰、易于理解和维护。
 * TypeScript 中的枚举与其他语言中的枚举类似（例如 C#、Java 等），但是 TypeScript 的枚举功能比其他语言更加灵活，支持数值、字符串、异构（数值与字符串混合）枚举等多种方式。
 */

/**
 * 基本的数值枚举
 * 默认情况下，枚举的成员是数字类型，并且从 0 开始递增。如果不指定成员的值，TypeScript 会自动为每个成员分配一个递增的数字值。
 */
enum Direction {
  Up, // 默认为 0
  Down, // 默认为 1
  Left, // 默认为 2
  Right, // 默认为 3
}

let move: Direction = Direction.Up;
console.log(move); // 输出: 0

/**
 * 指定枚举成员的值
 * 你可以显式指定枚举成员的值。指定了值后，后续没有显式赋值的成员会继续递增。
 */
enum DirectionA {
  Up = 1,
  Down, // 自动赋值为 2
  Left, // 自动赋值为 3
  Right, // 自动赋值为 4
}

console.log(DirectionA.Up); // 输出: 1
console.log(DirectionA.Down); // 输出: 2
console.log(DirectionA.Left); // 输出: 3
console.log(DirectionA.Right); // 输出: 4

/**
 * 字符串枚举
 * TypeScript 还支持字符串枚举，其中枚举成员的值是字符串而不是数字。
 * 这对于表示具有具体意义的常量值（如状态码、事件类型等）时非常有用。
 */
enum DirectionB {
  Up = "UP",
  Down = "DOWN",
  Left = "LEFT",
  Right = "RIGHT",
}

console.log(DirectionB.Up); // 输出: "UP"
console.log(DirectionB.Left); // 输出: "LEFT"

/**
 * 异构枚举（混合枚举）
 * TypeScript 允许创建异构枚举（也叫混合枚举），即枚举成员可以是数字和字符串的混合类型。
 * 虽然这种类型的枚举不常见，但它仍然是合法的。
 */
enum MixedEnum {
  No = 0,
  Yes = "YES",
}

console.log(MixedEnum.No); // 输出: 0
console.log(MixedEnum.Yes); // 输出: "YES"

/**
 * 枚举反向映射
 * 在 TypeScript 中，数值枚举会自动生成反向映射（从值到名称的映射）。
 * 这使得你可以通过枚举的值反向查找其名称。
 */
enum DirectionC {
  Up = 1,
  Down,
  Left,
  Right,
}

console.log(DirectionC[1]); // 输出: "Up"
console.log(DirectionC[2]); // 输出: "Down"

