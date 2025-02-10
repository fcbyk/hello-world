#include "index.h"

int type(int test){

    int init = test;

     /**
      * 基本数据类型
      * 整数类型（用于表示整数值）
      * 浮点类型（用于表示带小数的数值）
      * 字符类型（用于表示单个字符）
      * 布尔类型（用于表示真/假） C99 引入的布尔类型
      */
     {
         {
             short a = 100;
             int b = 200;
             long c = 300L;

             signed int d = 400;
             unsigned int e = 500;

             test += (a+b+c+d+e == 1500);
         }

         {
             char a = 's';

             test += (a+1 == 116);
         }

         {
             float a = 4.5f;
             double b = 200.11;
             long double c = 500.33;
             long double sum = a + b + c;

             test += (fabsl(sum - 704.94) < 1e-6);
         }

         {
             bool a = true;
             bool b = false;

             test += (a+b);
         }
     }


    /**
     * 派生数据类型
     * 派生数据类型是通过基本数据类型派生出来的数据类型
     * 主要包括指针、数组、结构体、共用体和枚举。
     */
    {
        {
            int a[5] = {1, 2, 3, 4, 5};
            char b[6] = "hello";
            int c[2][3] = {9,8,7,6,5,4};
            test += (a[2]+b[0]+c[1][2] == 111);
        }

        {
            struct student{
                int num;
                char name[10];
                int computer,english,math;
                double average;
            };

            struct student stu = {101,"zhang",78,87,85};

            test += (stu.num + stu.computer == 179);
        }


        {
            int num = 10;
            int *ptr = &num;
            int a = *ptr;
            test += (a==10);
        }

        {
            union {
                int i;
                float f;
                char str[20];
            } nui;

            nui.f = 10.1f;
            nui.i = 10;

            test += ((float)nui.i+nui.f != 20.1f);
        }

        {
            enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
            enum Weekday today = Monday;
            test += (today + 1 == 2);
        }

    }

    /**
     * 用户自定义数据类型、空类型
     */
    {
        typedef unsigned long u_long;
        u_long num = 100000L;
        test += (num-10 == 99990);
    }

    return test == (init + 10);
 }