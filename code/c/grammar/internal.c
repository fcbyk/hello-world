#include  <stdlib.h>
#include <stdio.h>

/*
// #region drawing

    +------------------+ 高地址
    |  栈区 (Stack)     |  - 函数调用、局部变量
    |                  |  - 由系统自动管理，向下增长
    +------------------+
    |  堆区 (Heap)      |  - 动态分配内存
    |                  |  - 由程序员控制，向上增长
    +------------------+
    |  BSS 段          |  - 未初始化的全局/静态变量
    +------------------+
    |  数据段           |  - 已初始化的全局/静态变量
    +------------------+
    |  常量区           |  - 常量数据（如字符串字面量）
    +------------------+
    |  代码区 (Text)    |  - 程序代码
    +------------------+  低地址

// #endregion drawing
*/

/**
 * 栈区 (Stack)
 * 用于存储局部变量、函数参数、返回地址等，管理函数调用过程中的临时数据
*/
// #region stack
void a() {
    int a = 10; // 局部变量，存储在栈区
    int b = 20;
}
// #endregion stack

/**
 * 堆区 (Heap)
 * 用于动态分配内存,需要程序员手动分配 (malloc) 和释放 (free)。
 */
// #region heap
void b(){
    int *p = (int *)malloc(sizeof(int) * 10); // 动态分配 10 个整数的内存
    if (p) {
        p[0] = 42;
        free(p); // 释放内存
    }
}
// #endregion heap

/**
 * 全局/静态区 (Global/Static)
 * 用于存储全局变量、静态变量、静态全局变量。
 * 全局变量在程序执行期间始终存在。分为已初始化区和未初始化区（BSS段）。
*/
// #region gs
int g_var = 10;        // 全局变量，已初始化，存储在数据段
static int s_var;      // 静态变量，未初始化，存储在 BSS 段
// #endregion gs

/**
 * 常量区 (Read-only data)
 * 存储常量（如字符串字面量、const 修饰的全局变量）
*/
// #region ro
const int c = 10;      // 存储在常量区
char *str = "hello";   // 字符串字面量存储在常量区
// #endregion ro

/**
 * 代码区 (Text)
 * 存储程序的可执行指令。
*/
// #region text
void d() {
    printf("Hello, world!\n"); // 可执行代码存储在代码区
}
// #endregion text