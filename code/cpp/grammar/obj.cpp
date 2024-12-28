#include <iostream>
using namespace std;

/**
 * 类
 * 面向对象：万事万物都皆为对象，对象上有其属性和行为
 * class 类名{ 访问权限： 属性 / 行为 };
*/
class Circle{
public:
    int r; //半径
    double calculateZC(){
        return  2 * 3.14 * r;
    }
};

int main1(){
    Circle c1;
    c1.r = 10;
    cout << "圆的周长为： " << c1.calculateZC() << endl;
    return 0;
}

/**
 * 类外实现
 * 类内声明： 在类中声明成员函数。
 * 类外定义： 在类的外部使用类名和作用域运算符 :: 来定义这些成员函数。
 * 类外实现将类的成员函数定义从类定义中分离出来，而不是直接在类内定义成员函数。
 * 这种做法有助于代码的组织和可读性，尤其是在类的实现较为复杂时。
 */
class MyClass {
private:
    string message;

public:
    // 构造函数声明
    MyClass(const string& msg);

    // 成员函数声明
    void printMessage() const;

    // 成员函数声明
    void setMessage(const string& msg);
};

// 类外实现构造函数
MyClass::MyClass(const string& msg) : message(msg) {}

// 类外实现成员函数
void MyClass::printMessage() const {
    cout << "Message: " << message << endl;
}

// 类外实现成员函数
void MyClass::setMessage(const string& msg) {
    message = msg;
}

int main23() {
    MyClass obj("Hello, World!");
    obj.printMessage();

    obj.setMessage("New Message!");
    obj.printMessage();
    return 0;
}

/**
 * 访问权限
 * 默认权限为私有
 * public、protected、private
*/
class Person_{
    int age;
    public:string m_Name;
    protected:string m_Car;
    private:int m_Password;
};

/**
 * 对象的初始化和清理
 * 构造函数和析构函数，不需要写返回值
 */
class Phone_123{

    // 构造函数可以有参数，因此可以发生重载
    // 程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次
    public:
    Phone_123(){
        cout << "Phone_123的构造函数调用" << endl;
    }

    // 析构函数不可以有参数，因此不可以发生重载
    // 程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
    ~Phone_123(){
        cout << "Phone_123的析构函数调用" << endl;
    }
};

int main2(){
    Phone_123 p;  // 栈上分配
    // 当函数结束时，p对象的析构函数会自动调用

    auto* obj = new Phone_123(); // 堆上分配
    delete obj; // 手动释放内存并调用析构函数

    return 0;
};

/**
 * 静态成员
 * 成员变量和成员函数前加上关键字static
 * 所有对象共享同一份数据，在编译阶段分配内存，静态成员函数只能访问静态成员变量
 */
class Phone_122{
public:
    static int price;
    static void off(){}
};

// 类外初始化
int Phone_122::price = 0;

int main3(){
    //静态成员变量两种访问方式

    //1、通过对象
    Phone_122 p1;
    p1.price = 100;
    cout << p1.price << endl;

    Phone_122 p2;
    p2.price = 200;
    cout << p1.price << endl; //共享同一份数据
    cout << p2.price << endl;

    //2、通过类名
    cout << Phone_122::price << endl;

    return 0;
}

/**
 * this指针
 * this指针是隐含每一个非静态成员函数内的一种指针
 * this指针不需要定义，直接使用即可
*/
class Phone_152{
public:
    auto hello(){
        cout << "hello" << endl;
        return this;
    }
};

int main4(){
    Phone_152 p;
    p.hello()->hello()->hello();
    return 0;
}

/**
 * 友元
 * 友元的目的就是让一个函数或者类 访问另一个类中私有成员
*/
class Building;

class goodGay3{
private:
    Building *building;
public:
    goodGay3();
    void visit();
};

class Building{

    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
    friend void goodGay(Building * building);

    //告诉编译器 goodGay2类是Building类的好朋友，可以访问到Building类中私有内容
    friend class goodGay2;

    //告诉编译器  goodGay3类中的visit成员函数 是Building好朋友，可以访问私有内容
    friend void goodGay3::visit();

    public:
    Building(){
        this->SittingRoom = "客厅";
        this->BedRoom = "卧室";
    }
    string SittingRoom;

    private:string BedRoom;
};

void goodGay(Building * building){
    cout << "好基友正在访问" << building->SittingRoom << endl;
    cout << "好基友正在访问" << building->BedRoom << endl;
}

class goodGay2{
    private:
        Building *building;
    public:
        goodGay2(){
            building = new Building;
        };
        void visit(){
            cout << "好基友正在访问" << building->SittingRoom << endl;
            cout << "好基友正在访问" << building->BedRoom << endl;
        };
};

void goodGay3::visit(){
    cout << "好基友正在访问" << building->SittingRoom << endl;
    cout << "好基友正在访问" << building->BedRoom << endl;
};
goodGay3::goodGay3(){
    building = new Building;
};

int main54(){
    Building b;
    goodGay(&b);

    goodGay2 gg2;
    gg2.visit();

    goodGay3 gg3;
    gg3.visit();
    return 0;
}