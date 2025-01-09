package com.fcbyk.springframework.di;

import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestDI {

    @Test
    public void test01(){
        ApplicationContext ctx = new ClassPathXmlApplicationContext("hello-di.xml");

        HelloDI helloDI = (HelloDI)ctx.getBean("helloDI");

        helloDI.test();
    }
}
