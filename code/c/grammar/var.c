#include "index.h"

/**
 * 变量
 * 作用：给一段指定的内存空间起名，方便操作这段内存
 * 数据类型 变量名 = 初始值;
 * 数据类型的作用是告诉计算机给给该变量分配多大的内存
 */
int var(int test) {

    /**
     * - 笔记请忽略函数作用域
     * 全局变量：从程序开始到结束一直存在，存储在全局/静态存储区。
     * 全局常量：只读，生命周期与程序一致，存储在只读数据段。
     * 静态全局变量：只能在当前文件中访问，生命周期与程序一致。
     */
    int g_var = 10;
    const int G_VAR = 10;
    static int s_g_var = 1;
    int *globalPtr = &g_var;

    /**
     * 局部变量：仅在函数调用时存在，存储在栈区。
     * 局部常量：与局部变量类似，生命周期仅限函数执行期间。
     * 静态局部变量：作用域为函数内部，但生命周期贯穿程序始终，存储在静态存储区。
     * 寄存器变量：存储在寄存器中（如果硬件允许），生命周期仅限函数调用，寄存器变量不能在全局作用域声明
     * 局部指针变量：存储地址，生命周期与声明它的作用域一致。
     */
    {
        int a = 10;
        const int A = 100;
        static int s_a = 1;
        register int r_a = 50;
        int *p = &a;

        {
            test += (g_var + G_VAR + + *globalPtr == 30);
            test += (a  + A + r_a + *p == 170);
            test += s_g_var;
            test += s_a;

            /**
             * 多次调用函数，静态局部变量将累加
             */
            s_g_var++;
            s_a++;
        }

    }

    return test;
}