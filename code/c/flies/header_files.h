// 头文件用于使多个源文件之间可以共享函数声明和宏定义等公共信息
// 头文件只写声明，在源文件写实现

// #region index
#include <stdio.h>
#ifndef HEADER // 如果 HEADER 没有定义
#define HEADER // 定义 HEADER

// 宏定义
#define PI 3.14159

// 函数声明
void printHello();
int add(int a, int b);

// 结构体定义
struct Point { int x; int y; int z; };

#endif // 结束条件编译
// #endregion index