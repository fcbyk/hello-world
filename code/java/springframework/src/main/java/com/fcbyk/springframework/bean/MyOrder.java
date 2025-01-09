package com.fcbyk.springframework.bean;

public class MyOrder {

    public MyOrder() {
        System.out.println("订单对象已被创建");
    }

    // 测试方法
    public void test() {
        System.out.println("订单test方法执行");
    }
}
