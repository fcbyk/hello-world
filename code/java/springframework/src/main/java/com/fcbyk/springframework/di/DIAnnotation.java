package com.fcbyk.springframework.di;

import com.fcbyk.springframework.bean.BeanAnnotation;
import com.fcbyk.springframework.bean.Book;
import lombok.Getter;
import lombok.Setter;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.PropertySource;
import org.springframework.stereotype.Component;

// #region index
@Component
// 加载properties配置文件
@PropertySource("jdbc.properties")
@Getter
public class DIAnnotation {

    // 按照类型自动注入
    @Autowired
    private BeanAnnotation bean;

    // @Qualifier指定注入哪个名称的bean对象
    // 不能独立使用，必须和@Autowired一起使用
    @Autowired
    // @Qualifier("book1")
    private Book book;

    // 注入简单类型数据
    @Value("中国移动")
    private String name;

    // 读取配置文件中的内容
    @Value("${jdbc.password}")
    private String password;
}
// #endregion index
