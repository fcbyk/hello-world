package com.fcbyk.springframework.bean;

public class MyOrderFactory {

    public MyOrderFactory(){
        System.out.println("订单工厂对象被创建");
    }

    public static MyOrder getOrder(){
        return new MyOrder();
    }
}

