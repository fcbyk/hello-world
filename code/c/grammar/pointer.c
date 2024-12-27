#include <stdio.h>

void a(){
    // 1、指针的定义
    int a = 10; // 定义整型变量a

    // 指针定义语法： 数据类型 * 变量名 ;
    int * p;

    // 指针变量赋值
    p = &a; // 指针指向变量a的地址
    printf("变量 a 的地址是: %p\n", (void*)&a);
    printf("指针 p 的地址是: %p\n", (void*)p);

    // 2、指针的使用
    // 通过*操作指针变量指向的内存
    // 指针变量解引用，可以操作指针指向的内存
    printf("%d",*p);
}

void b() {
    //指针变量p指向内存地址编号为0的空间
    int * p = NULL;

    //访问空指针报错
    //内存编号0 ~255为系统占用内存，不允许用户访问
    printf("%p\n",p);

    //指针变量p指向内存地址编号为0x1100的空间
    p = (int *)0x1100;

    //访问野指针报错
    printf("%p\n",p);
}

void c(){
    int a = 10;
    int b = 10;

    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int * p1 = &a;
    p1 = &b; //正确
    //*p1 = 100;  报错


    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int * const p2 = &a;
    //p2 = &b; //错误
    *p2 = 100; //正确

    //const既修饰指针又修饰常量
    const int * const p3 = &a;
    //p3 = &b; //错误
    //*p3 = 100; //错误
}

void d(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int *p = arr;  // 指向数组的指针

    // 输出第一个元素
    printf("第一个元素： %d\n", arr[0]);
    printf("指针访问第一个元素： %d\n", *p);

    // 使用指针遍历数组
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *p);
        p++;  // 移动指针到下一个元素
    }
}

// 值传递
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void e() {
    int a = 10;
    int b = 20;

    // 值传递，不会改变实参
    swap1(a, b);

    // 地址传递，会改变实参
    swap2(&a, &b);

    // 打印结果
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

