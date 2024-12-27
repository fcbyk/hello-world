#include <iostream>
using namespace std;

/**
 * 函数重载 (Function Overloading)
 * 多个同名的函数，参数列表不同，编译器根据传入的参数类型和数量来选择调用哪个重载版本
*/
int add(int a, int b) { return a + b;}
double add(double a, double b) { return a + b;}
int add(int a, int b, int c) { return a + b + c;}

void ex10() {
    int intSum = add(2, 3);           // 调用 int add(int, int)
    double doubleSum = add(2.5, 3.5); // 调用 double add(double, double)
    int tripleSum = add(1, 2, 3);     // 调用 int add(int, int, int)

    cout << "Sum of two integers: " << intSum << endl;
    cout << "Sum of two doubles: " << doubleSum << endl;
    cout << "Sum of three integers: " << tripleSum << endl;
}

/**
 * 默认参数值 (Default Arguments)
 * 函数的参数指定默认值，如果调用时没有传入相应的参数，就使用默认值
*/
// 函数带有默认参数值
double add(int a, double b = 5.2) { return a + b; }

void ex11() {
    double sum1 = add(10);      // 调用时只传递一个参数，b 使用默认值 5.2
    double sum2 = add(10, 20.3);  // 调用时传递两个参数，b 使用传递的值 20.3

    cout << "Sum with default value: " << sum1 << endl;
    cout << "Sum with custom value: " << sum2 << endl;
}
