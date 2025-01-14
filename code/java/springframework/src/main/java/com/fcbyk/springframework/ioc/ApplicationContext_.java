package com.fcbyk.springframework.ioc;

import com.fcbyk.springframework.bean.Book;
import com.fcbyk.springframework.config.SpringConfig;
import com.fcbyk.springframework.di.DIAnnotation;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.context.support.FileSystemXmlApplicationContext;

import javax.sql.DataSource;

/**
 * ApplicationContext 是 Spring 框架中的一个接口，它是 Spring IoC 容器的顶层接口，
 * 定义了一系列方法用于访问和管理应用中的 Bean。
 * 实际上，Spring 框架提供了多种实现了 ApplicationContext 接口的类，
 * 用于支持不同的配置方式和应用场景，比如基于 XML 配置、基于注解配置、基于 Java 配置等。
 * 这些不同的实现类包括 ClassPathXmlApplicationContext、AnnotationConfigApplicationContext 等，
 * 它们都是 ApplicationContext 接口的具体实现。
 */
public class ApplicationContext_ {

    @Test
    public void helloIoc(){
        //获取IOC容器
        ApplicationContext ctx = new ClassPathXmlApplicationContext("hello-ioc.xml");

        // 通过id从IOC容器获取bean
        Book book1 = (Book)ctx.getBean("book");
        book1.test();

        // 通过别名从容器中获取对象
        Book book2 = (Book)ctx.getBean("book1");
        book2.test();
        Book book3 = (Book)ctx.getBean("book2");
        book3.test();
    }

    // IOC容器的创建方式
    public void getApplicationContext(){
        // 类路径下的XML配置文件
        ApplicationContext ctx1 = new ClassPathXmlApplicationContext("applicationContext.xml");

        // 文件系统下的XML配置文件
        ApplicationContext ctx2 = new FileSystemXmlApplicationContext("springframework/src/main/resources/applicationContext.xml");
    }

    @Test
    // 管理第三方bean
    public void getDataSource(){
        ApplicationContext ctx = new ClassPathXmlApplicationContext("third-bean.xml");
        // 获取DruidDataSource对象
        DataSource dataSource = (DataSource) ctx.getBean("dataSource");
        System.out.println(dataSource);
    }

    @Test
    // 使用注解
    public void annotationDev(){
        // #region aioc
        // 通过配置类生成的容器，无法使用xml里的bean，因为ComponentScan扫描不了xml里的包
        ApplicationContext ctx = new AnnotationConfigApplicationContext(SpringConfig.class);

        DIAnnotation a = (DIAnnotation) ctx.getBean("DIAnnotation");

        System.out.println(a.getName());
        a.getBook().test();
        // #endregion aioc
    }
}
