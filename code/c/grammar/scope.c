// 全局作用域
// #region global
// 预处理指令
#include <stdio.h>
#define PI 3.14159

// 变量
int globalVar = 10;
const int MAX_SIZE = 100;

// 函数
void globalFun(){ printf("全局函数"); }

// 枚举、结构体、联合体
enum Day { MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY };
struct Point { int x; int y; };
union Data { int intVal; float floatVal;};
// #endregion global

// 局部作用域
// #region local
void exampleFunction() {
    int localVar = 5;  // 局部变量
    printf("localVar: %d\n", localVar);
}
// #endregion local

// 块作用域
// #region block
void block(){
    if (1) {
        int blockVar = 10;  // 块作用域变量
        printf("blockVar: %d\n", blockVar);
    }
}
// #endregion block