#include <stdio.h>
#include <stdbool.h>

/*
// #region index
返回值类型 函数名（参数列表）
{
    函数体语句
    return 表达式
}
// #endregion index
*/

enum en {HELLO};

// #region def
// 函数的声明可以多次，但是函数的定义只能有一次
void c();
void c();
void c(){ printf("hello"); }
// #endregion def

// #region param
// 值传递
int a(int i,double d,char c,bool b, enum en);
// 地址传递（指针传递）
int b(double *dp,char cs[],const int *x);
// #endregion param

// #region recursion
int d(int n) {
    if (n == 0) return 1;
    else return n * d(n - 1);
}
// #endregion recursion
