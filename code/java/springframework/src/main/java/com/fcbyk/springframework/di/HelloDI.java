package com.fcbyk.springframework.di;

import com.fcbyk.springframework.bean.Book;

// #region index
public class HelloDI {

    // private Book book = new Book("数据结构");

    // 使用DI，实现解耦
    private Book book;

    // 需要提供set方法
    public void setBook(Book book) { this.book = book; }

    public void test(){
        book.test();
        System.out.print(book);
    }
}
// #endregion index