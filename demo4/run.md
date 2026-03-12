## 运行 Kotlin 程序

Kotlin 运行在 Java Virtual Machine

- 查看是否已经有 JDK 环境 和 Kotlin 编译器
```bash
java -version
kotlinc -version
```

- 编译
```bash
kotlinc hello.kt -include-runtime -d hello.jar
```

- 运行生成 `hello.jar`
```bash
java -jar hello.jar
```

## Kotlin 脚本

`.kts` 后缀就是 **Kotlin 脚本（Kotlin Script）**。

### 一、`.kt` 和 `.kts` 的区别

| 后缀     | 用途           | 需要写类吗            | 编译方式                      |
| ------ | ------------ | ---------------- | ------------------------- |
| `.kt`  | 正规 Kotlin 文件 | 不一定（可以顶层函数，也可以类） | 先编译成 JVM 字节码 `.class`，再运行 |
| `.kts` | Kotlin 脚本    | 不需要              | 直接解释执行，像 Python 脚本一样      |

### 二、`.kts` 脚本特点

1. **顶层即可写代码**
   不需要 `fun main()`，直接写：

```kotlin
println("Hello Kotlin Script")
```

运行：

```bash
kotlinc -script hello.kts
```

2. **类似 Python / Bash 脚本**

* `.kt` 更像 Java 程序 → 需要编译
* `.kts` 更像 Python 脚本 → 解释执行
