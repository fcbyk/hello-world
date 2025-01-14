package com.fcbyk.springframework.di;
import com.fcbyk.springframework.bean.Book;
import com.fcbyk.springframework.bean.MyOrder;
import lombok.Setter;

import java.util.*;

@Setter
public class XMLDI {

    private final String addr;
    private final int age;

    // 构造器注入
    public XMLDI(String addr, int age) {
        this.addr = addr;
        this.age = age;
    }

    // 简单类型注入
    private String name;
    private int phone;

    // 引用类型注入
    private Book book;
    private MyOrder order;

    // 集合类型注入
    private int[] array;
    private List<String> list;
    private Set<String> set;
    private Map<String,String> map;
    private Properties properties;

    // 测试输出
    public void test(){
        System.out.println(this.addr);
        System.out.println(this.age);
        this.book.test();
        this.order.test();
        System.out.println(this.name);
        System.out.println(this.phone);
        System.out.println("遍历数组:" + Arrays.toString(array));
        System.out.println("遍历List" + list);
        System.out.println("遍历Set" + set);
        System.out.println("遍历Map" + map);
        System.out.println("遍历Properties" + properties);
    }
}
