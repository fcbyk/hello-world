#include <iostream>
using namespace std;

// 返回局部变量的地址是一个错误做法，
// 因为局部变量在函数结束时会被销毁。因此，返回局部变量的地址会导致 悬空指针（dangling pointer）问题，
// 即指针指向一个已经被销毁的内存位置。
int* ex1() {
    int a = 10;  // 局部变量
    return &a;   // 返回局部变量 a 的地址
}

/**
 * new
 * C++中利用new操作符在堆区开辟数据
 * 利用new创建的数据，会返回该数据对应的类型的指针
 */
int* ex2(){
    int* a = new int(10);
    return a;
}

void ex3() {
    int *p = ex2();
    int* arr = new int[10];

    for (int i = 0; i < 10; i++) arr[i] = i + 100;
    for (int i = 0; i < 10; i++) cout << arr[i] << endl;

    cout << *p << endl;
    cout << *p << endl;

    //利用delete释放堆区数据
    delete p;

    //释放数组 delete 后加 []
    delete[] arr;

    //cout << *p << endl; //报错，释放的空间不可访问
}

/**
 * 引用
 * 等于给变量起别名
 * 数据类型 &别名 = 原名
 * 引用必须初始化，后续不可以改变引用
*/
void ex4(){
    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 地址传递
void mySwap01(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
// 引用传递在 C++ 中比指针传递更简洁，因为你不需要显式解引用，并且避免了指针可能为 nullptr 的风险
void mySwap02(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}