# Spring
<div style="height: 10px;"></div>
<LinkBtn text="官网" url="https://spring.io/"/>

## Spring Framework
### Maven坐标
<<< @/../code/java/springframework/pom.xml#sp

### IOC
> Spring创建了一个容器用来存放所创建的对象，这个容器就叫IOC容器
#### 配置
::: code-group
<<< @/../code/java/springframework/src/main/resources/hello-ioc.xml [xml]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/config/SpringConfig.java#index [注解]
:::
#### Bean
::: code-group
<<< @/../code/java/springframework/src/main/resources/bean.xml#beanattr [xml]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/bean/BeanAnnotation.java#index [注解]
:::
#### 获取容器与bean
::: code-group
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/ioc/ApplicationContext_.java#getioc [xml]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/ioc/ApplicationContext_.java#aioc [class]
:::

### DI
#### xml
::: code-group
<<< @/../code/java/springframework/src/main/resources/hello-di.xml#index [hello]
<<< @/../code/java/springframework/src/main/resources/di.xml#di [其他注入]
<<< @/../code/java/springframework/src/main/resources/third-bean.xml#ds [管理第三方bean]
:::
#### 注解
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/di/DIAnnotation.java#index
#### 使用
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/di/HelloDI.java#index

## Spring MVC
### Maven坐标
::: code-group
<<< @/../code/java/springframework/pom.xml#webmvc [webmvc]
<<< @/../code/java/springframework/pom.xml#web [web]
<<< @/../code/java/springframework/pom.xml#servlet [servlet]
:::
### 配置
::: code-group
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/config/SpringMvcConfig.java#index [mvc]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/config/ServletContainersInitConfig.java#index [servlet]
:::
### Controller
::: code-group
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/mvc/HelloMVC.java#index [demo]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/mvc/Param.java#index [接收数据]
<<< @/../code/java/springframework/src/main/java/com/fcbyk/springframework/mvc/RESTful.java#index [RESTful]
:::

## Spring Boot
### 配置
> Spring Boot 会自动加载位于默认位置的配置文件
::: code-group
<<< @/../code/java/springboot/src/main/resources/application.properties#base [基础]
<<< @/../code/java/springboot/src/main/resources/application.properties#db [数据库]
:::
### 启动
::: code-group
<<< @/../code/java/springboot/src/main/java/com/fcbyk/springboot/Application.java#index [mian]
```sh [sh]
# Spring Boot 提供内嵌的 Tomcat、Jetty、Undertow 等服务器
java -jar myapp.jar

# 以指定的配置文件启动程序
java -jar myapp.jar --spring.config.name=myconfig

# ...
# 可根据需求，动态地写启动参数，覆盖配置文件
```
:::