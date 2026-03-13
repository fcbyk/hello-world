
Gradle Wrapper 的目的很简单：**让任何人不用自己安装 Gradle，也能用指定版本构建项目。**

一般项目里会看到这个结构：

```
gradle/
 └─ wrapper/
     ├─ gradle-wrapper.jar
     └─ gradle-wrapper.properties
gradlew
gradlew.bat
```

## 一、`gradle-wrapper.jar` 的作用

`gradle-wrapper.jar` 是 **Wrapper 的启动程序**（Java 代码编译后的 jar）。

它主要负责三件事：

1️⃣ **读取配置**

读取 `gradle-wrapper.properties`，获取：

* Gradle 下载地址
* 使用的 Gradle 版本

例如：

```
distributionUrl=https\://services.gradle.org/distributions/gradle-8.7-bin.zip
```

---

2️⃣ **自动下载 Gradle**

如果本机没有这个版本：

```
~/.gradle/wrapper/dists/
```

`gradle-wrapper.jar` 会自动：

* 下载指定 Gradle
* 解压
* 缓存

---

3️⃣ **启动 Gradle**

下载完成后，它会启动对应的 Gradle 执行构建，例如：

```
./gradlew build
```

实际上执行流程是：

```
gradlew -> gradle-wrapper.jar -> 下载Gradle -> 启动Gradle
```

---

## 二、`gradle-wrapper.properties` 的作用

这个文件是 **Wrapper 的配置文件**。

典型内容：

```
distributionBase=GRADLE_USER_HOME
distributionPath=wrapper/dists
distributionUrl=https\://services.gradle.org/distributions/gradle-8.7-bin.zip
zipStoreBase=GRADLE_USER_HOME
zipStorePath=wrapper/dists
```

关键配置是：

### `distributionUrl`

指定 **Gradle版本**

例如：

```
gradle-8.7-bin.zip
```

含义：

| 文件     | 含义           |
| ------ | ------------ |
| `-bin` | 只包含运行 Gradle |
| `-all` | 包含源码和文档      |

安卓项目一般用 `-bin`。

---

### `distributionBase`

Gradle 下载后存储位置：

```
~/.gradle
```

---

## 三、为什么要用 Gradle Wrapper

如果没有 Wrapper，会出现经典问题：

```
开发者A：Gradle 8.2
开发者B：Gradle 7.5
CI：Gradle 8.0
```

构建可能失败。

Wrapper 的优势：

| 优点           | 说明         |
| ------------ | ---------- |
| 统一 Gradle 版本 | 所有人构建环境一致  |
| 不需要手动安装      | clone 项目即可 |
| CI 友好        | 自动下载       |
| 版本可控         | 项目绑定版本     |

---

## 四、gradlew / gradlew.bat

这两个脚本负责启动 Wrapper：

| 文件            | 作用            |
| ------------- | ------------- |
| `gradlew`     | Linux / macOS |
| `gradlew.bat` | Windows       |

执行：

```
./gradlew build
```

其实就是运行：

```
java -jar gradle-wrapper.jar
```

## 五、总结

Gradle Wrapper 的工作流程：

```
gradlew
   ↓
gradle-wrapper.jar
   ↓
读取 gradle-wrapper.properties
   ↓
下载指定 Gradle
   ↓
执行 Gradle 构建
```

| 文件                          | 本质           |
| --------------------------- | ------------ |
| `gradle-wrapper.jar`        | Wrapper 启动程序 |
| `gradle-wrapper.properties` | Wrapper 配置   |
| `gradlew`                   | 启动脚本         |


