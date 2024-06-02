package com.fcbyk.springframework.service.impl;

import com.fcbyk.springframework.dao.BookDao;
import com.fcbyk.springframework.dao.impl.BookDaoImpl;
import com.fcbyk.springframework.service.BookService;

public class BookServiceImpl implements BookService {
    private BookDao bookDao = new BookDaoImpl();
    public void save() {
        System.out.println("book service save ...");
        bookDao.save();
    }
}
