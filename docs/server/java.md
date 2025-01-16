# Java
<div style="height: 10px;"></div>
<LinkBtn text="Java 全栈知识体系" url="https:/pdai.tech/"/>

## 语法
### 相关文件
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/files/JavaFile.java [java文件]
```text [class文件]
java文件编译后生成的字节码文件
```
:::

### 变量与常量
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Variables.java#var [变量]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Variables.java#const [常量]
:::

### 数据类型
- 8种基本数据类型
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#int [整型]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#float [浮点型]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#char [字符型]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#bol [布尔型]
:::
- 引用数据类型
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#string [字符串]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#array [数组]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#class [类]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#interface [接口]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#enum [枚举]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/DataType.java#w-class [包装类]
:::

### 运算符
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#arithmetic [算术]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#logic [逻辑]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#comparison [比较]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#assignment [赋值]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#ternary [条件]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#bitwise [位]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#unary [一元]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#instanceOf [instanceof]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Operator.java#nullCoalescing [null]
::: 

### 控制语句
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Control.java#if [分支]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Control.java#while [循环]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Control.java#return [跳转]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Control.java#labeled [标签]
::: 

### 方法（函数）
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Method.java#def [定义]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/grammar/Method.java#reload [重载]
:::

### 类（面向对象）

#### 基本
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/OOP.java#base [定义]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/OOP.java#attr [属性]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/OOP.java#meth [方法]
:::

#### 创建对象
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/OOP.java#cmeth [构造方法]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/OOP.java#new [new]
:::
<!-- #### 封装 -->

#### 封装
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/Encapsulation.java#pr [限制访问]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/Encapsulation.java#set [setter]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/Encapsulation.java#get [getter]
:::

#### 继承
> Java是单继承，一个类只能继承一个直接父类
::: code-group
<<< @/../code/java/start/src/main/java/com/fcbyk/start/object/Extends.java#f [父类]
:::

#### 多态

## API

### 集合
::: code-group

``` text [关系]
- Collection (接口)
  - List (接口)
    - ArrayList (实现类)
    - LinkedList (实现类)
  - Set (接口)
    - HashSet (实现类)
    - TreeSet (实现类)
  - Queue (接口)
    - LinkedList (实现类)
    - PriorityQueue (实现类)
  
- Map (接口)
  - HashMap (实现类)
  - TreeMap (实现类)
  - LinkedHashMap (实现类)
  - Hashtable (实现类)
```
<<< @/../code/java/start/src/main/java/com/fcbyk/start/collection/Collection_.java#arraylist [ArrayList]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/collection/Map_.java#map [Map]
:::

### JDBC
::: code-group
``` text [关系]
JDBC
├── java.sql.Connection
│   ├── java.sql.DriverManager
│   └── javax.sql.DataSource
│       ├── com.mysql.cj.jdbc.MysqlDataSource        (MySQL)
│       └── org.postgresql.ds.PGSimpleDataSource     (PostgreSQL)
├── java.sql.Statement
│   ├── java.sql.PreparedStatement
│   ├── java.sql.CallableStatement
│   └── com.mysql.cj.jdbc.StatementImpl            (MySQL)
├── java.sql.ResultSet
│   └── com.mysql.cj.jdbc.result.ResultSetImpl      (MySQL)
├── java.sql.Driver
│   └── com.mysql.cj.jdbc.Driver                    (MySQL)
├── java.sql.SQLException
└── javax.sql.ConnectionPoolDataSource
    └── com.mysql.cj.jdbc.MysqlConnectionPoolDataSource (MySQL)
```
<<< @/../code/java/start/src/main/java/com/fcbyk/start/jdbc/JDBCTest.java#connection [Connection]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/jdbc/JDBCTest.java#statement [Statement]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/jdbc/JDBCTest.java#resultSet [ResultSet]
:::

### Servlet
::: code-group
``` text [关系]
- javax.servlet (包)
  - Servlet (接口)
    - GenericServlet (抽象类)
    - HttpServlet (抽象类)
  - ServletRequest (接口)
    - HttpServletRequest (接口)
  - ServletResponse (接口)
    - HttpServletResponse (接口)
  - ServletConfig (接口)
  - ServletContext (接口)
  - Filter (接口)
    - GenericFilter (抽象类)
  - Listener (接口)
    - ServletContextListener (接口)
    - HttpSessionListener (接口)
    - ServletRequestListener (接口)
    - ServletContextAttributeListener (接口)
    - HttpSessionAttributeListener (接口)
  - RequestDispatcher (接口)
  - FilterConfig (接口)
```
<<< @/../code/java/start/src/main/java/com/fcbyk/start/servlet/Servlet_.java#servlet [Servlet]
<<< @/../code/java/start/src/main/java/com/fcbyk/start/servlet/HttpServlet_.java#http-servlet [HttpServlet]
:::
