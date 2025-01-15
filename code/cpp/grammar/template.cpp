#include <iostream>
using namespace std;

// #region template1
/**
 * 函数模板
 * 建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。
 *
 * 语法：
 * template<typename T>
 * 函数声明或定义
 *
 * template<class T> 和 template<typename T> 是等价的，两者可以互换使用
 * template<class T> 用在早期的版本
 */

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

void a() {
    int intMax = getMax(3, 5);  // 调用 int 类型的模板
    double doubleMax = getMax(3.5, 2.8);  // 调用 double 类型的模板
    cout << "Max int: " << intMax << endl;
    cout << "Max double: " << doubleMax << endl;
}
// #endregion template1

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

void b() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);  // 交换 int 类型的变量
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double p = 3.5, q = 7.9;
    cout << "Before swap: p = " << p << ", q = " << q << endl;
    swapValues(p, q);  // 交换 double 类型的变量
    cout << "After swap: p = " << p << ", q = " << q << endl;
}

// #region template2
/**
 * 类型推导、显式指定模板类型参数
*/
template <typename T>
T add(T a, T b) {
    return a + b;
}

void c() {
    auto sumInt = add(5, 3);  // 编译器自动推断类型为 int
    auto sumDouble = add(5.5, 3.2);  // 编译器自动推断类型为 double

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of doubles: " << sumDouble << endl;
}

void d(){
    int sumInt = add<int>(5, 3);  // 显式指定 T 为 int 类型
    double sumDouble = add<double>(5.5, 3.2);  // 显式指定 T 为 double 类型

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of doubles: " << sumDouble << endl;
}

template <typename T, typename U>
T add(T a, U b) {
    return a + b;
}

void e(){
    auto sum = add(5, 3.2);  // 编译器推导出 T 为 int，U 为 double
    cout << "Sum: " << sum << endl;

    int sum1 = add<int, int>(5, 3);  // 显式指定 T 为 int, U 为 int
    double sum2 = add<double, int>(5.5, 3);  // 显式指定 T 为 double, U 为 int

    cout << "Sum1: " << sum1 << endl;
    cout << "Sum2: " << sum2 << endl;
}
// #endregion template2

// #region template3
/**
 * 类模板
 * 类模板允许你定义一个可以操作不同数据类型的类
*/
template <typename T>
class Box {
private:
    T value;
public:
    Box(T val) : value(val) {}
    T getValue() { return value; }
    void setValue(T val) { value = val; }
};

void f(){
    Box<int> intBox(10);       // 创建一个 Box<int> 对象
    cout << "Value in intBox: " << intBox.getValue() << endl;

    Box<double> doubleBox(3.14);  // 创建一个 Box<double> 对象
    cout << "Value in doubleBox: " << doubleBox.getValue() << endl;
}
// #endregion template3