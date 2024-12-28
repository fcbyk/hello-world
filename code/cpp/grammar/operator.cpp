#include <iostream>
using namespace std;

/**
 * 运算符重载
 * 对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
 *
 * 可重载的运算符：
 * 算术运算符：+, -, *, /, %
 * 关系运算符：==, !=, <, >, <=, >=
 * 逻辑运算符：&&, ||, !
 * 位运算符：&, |, ^, ~, <<, >>
 * 其他运算符：[], (), ->, =, new, delete
 *
 * 不可重载的运算符：
 * 作用域解析运算符 ::
 * 成员访问运算符 .
 * 成员指针访问运算符 .*
 * 条件运算符 ?:
 * sizeof 和 typeid
*/
class Complex {
private:
    double real;
    double imag;

public:
    // 构造函数
    Complex(double r, double i) : real(r), imag(i) {}

    // 重载加法运算符
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // 打印函数
    void print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main21() {
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex c3 = c1 + c2; // 使用重载的 + 运算符
    c3.print();           // 输出: 4.0 + 6.0i
    return 0;
}
