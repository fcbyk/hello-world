package com.fcbyk.springframework.dao.impl;

import com.fcbyk.springframework.dao.BookDao;

public class BookDaoImpl implements BookDao {
    public void save() {
        System.out.println("book dao save ...");
    }
}
