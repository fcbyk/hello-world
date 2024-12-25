#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * 基本数据类型
 * 整数类型（用于表示整数值）
 * 浮点类型（用于表示带小数的数值）
 * 字符类型（用于表示单个字符）
 * 布尔类型（用于表示真/假）
 */

void a(){
    // #region int
    short a = 100;
    int b = 200;
    long c = 300L;

    signed int d = 400;
    unsigned int e = 500;
    // #endregion int
}

void b(){
    // #region char
    char a = 's';
    // #endregion char
}

void c(){
    // #region float
    float a = 4.5;
    double b = 200.11;
    long double c = 500.33;
    // #endregion float
}

void d(){
    // #region bool
    // C99 引入的布尔类型
    bool a = true;
    if (a) a = false;
    // #endregion bool
}

/**
 * 派生数据类型
 * 派生数据类型是通过基本数据类型派生出来的数据类型
 * 主要包括指针、数组、结构体、共用体和枚举。
 */
void e(){
    // #region arr
    int a[5] = {1, 2, 3, 4, 5};
    char b[6] = "Hello";
    int c[2][3] = {9,8,7,6,5,4};
    a[2] = 5;
    // #endregion arr
}

struct student
{
    int num;
    char name[10];
    int computer,english,math;
    double average;
};

void f(){
    // #region p
    int num = 10;

    // &为地址运算符，把num变量的地址赋值给指针变量ptr
    int *ptr = &num;

    // *号除了用于定义指针变量外，还被用于访问指针所指向的变量，也称为间接访问运算符
    int a = *ptr;

    struct student stu = {101,"zhang",78,87,85};
    typedef struct student student;
    student *pa;
    pa=&stu;

    // ->为指向运算符，访问指针指向的结构成员或共用体成员
    // 下面三条语句，效果一样
    stu.num =200;
    (*pa).num = 200;
    pa->num = 200;
    // #endregion p
}

void g(){
    // #region struct
    struct student
    {
        int num;
        char name[10];
        int computer,english,math;
        double average;
    };

    struct{
        int num;
        char name[20];
    } anonymity;

    struct student stu = {101,"不乐",78,87,85};
    stu.num=100;
    anonymity.num = 10;
    strcpy(anonymity.name, "匿名结构体");
    // #endregion struct
}

void h(){
    // #region union
    union Data {
        int i;
        float f;
        char str[20];
    };
    // #endregion union
}

void i(){
    // #region enum
    enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum Weekday today = Monday;  // 设置枚举变量
    // #endregion enum
}

// #region typedef
// 用户自定义数据类型、空类型
void demo(){
    typedef unsigned long ulong;
    ulong num = 100000L;
}
// #endregion typedef