#include "index.h"

int structType(int test){

    int init = test;

    /**
     * 结构体定义
     * 可紧接着定义变量并初始化
     */
    {
        struct student{
            char name[10];
            int age;
            int score;
        } zhangsan = { "张三", 18, 100 };

        test += (zhangsan.age+zhangsan.score == 118);

        /**
         * 结构体嵌套
         */
        {
            struct teacher{
                int id;
                char name[10];
                int age;
                struct student s;
            } t;
            t.s.score = 10;
            test += t.s.score - 9;
        }

        /**
         * 结构体数组
         */
        {
            struct student list[3]={
                    {"张三",18,80 },
                    {"李四",19,60 },
                    {"王五",20,70 }
            };

            test += (list[1].score + list[2].age == 80);
        }

        /**
         * 结构体的创建方式
         */
        {
            struct student lisi;
            strcpy(lisi.name, "李四");
            lisi.age = 20;

            struct student wangwu =  { "王五",18,100, };

            wangwu.age + lisi.age == 38 ? test++:0;
        }

        /**
         * 指针结构体可通过 -> 操作符可以访问成员
         */
        {
            struct student *p = &zhangsan;
            p -> score = 80;
            p -> age = 10;
            p -> age + p -> score == 90 ? test++:0;
        }
    }

    return (test == init + 5);
}