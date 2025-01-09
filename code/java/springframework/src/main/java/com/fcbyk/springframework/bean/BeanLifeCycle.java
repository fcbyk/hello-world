package com.fcbyk.springframework.bean;

public class BeanLifeCycle {

    private BeanLifeCycle() {
        System.out.println("bean已被创建");
    }

    // 测试方法
    public void test() {
        System.out.println("bean test方法执行");
    }

    // bean初始化对应的操作，需在xml配置
    public void init(){
        System.out.println("bean初始化");
    }

    // bean销毁前对应的操作，需在xml配置
    public void destroy(){
        System.out.println("bean销毁");
    }
}
