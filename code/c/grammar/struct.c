#include <stdio.h>
#include <string.h>

//结构体定义
struct student{
    //成员列表
    char name[10]; //姓名
    int age;       //年龄
    int score;     //分数
} stu3 = { "未定义", 0, 0 }; //结构体变量创建方式3，添加了全局变量stu3的初始化，避免使用未定义的值。

struct teacher{
    int id;
    char name[10];
    int age;
    struct student stu; //子结构体 学生
};

void a() {

    // 结构体变量创建方式1
    struct student stu1;

    // 使用 strcpy 为 name 赋值
    strcpy(stu1.name, "张三");
    stu1.age = 18;
    stu1.score = 100;

    printf("学生1: 姓名: %s, 年龄: %d, 分数: %d\n", stu1.name, stu1.age, stu1.score);

    // 结构体变量创建方式2
    struct student stu2 = { "李四", 19, 60 };

    printf("学生2: 姓名: %s, 年龄: %d, 分数: %d\n", stu2.name, stu2.age, stu2.score);

    // 赋值给全局变量 stu3
    strcpy(stu3.name, "王五");
    stu3.age = 18;
    stu3.score = 80;

    printf("学生3: 姓名: %s, 年龄: %d, 分数: %d\n", stu3.name, stu3.age, stu3.score);

}

void b(){
    //结构体数组
    struct student arr[3]=
            {
                    {"张三",18,80 },
                    {"李四",19,60 },
                    {"王五",20,70 }
            };
    printf("姓名: %s, 年龄: %d, 分数: %d\n", arr[0].name, arr[0].age, arr[0].score);
}

void c(){
    struct student stu = { "张三",18,100, };
    struct student * p = &stu;
    p->score = 80; //指针通过 -> 操作符可以访问成员
}