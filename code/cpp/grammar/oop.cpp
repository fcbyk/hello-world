#include <iostream>
#include <string>
using namespace std;

/**
 * 封装
 * 封装的核心思想是隐藏复杂性，暴露接口，以提高代码的安全性和可维护性
 * 使用 private、protected 和 public 来实现封装
*/
class Phone_543 {
    // 把属性隐藏起来，并按需要提供getter，setter方法
private:
    string name;
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Phone_543::name = name;
    }

};

int main213() {
    Phone_543 p;
    p.setName("张三");
    cout << p.getName() << endl;
    return 0;
}

/**
 * 继承
 * 允许一个类（称为子类或派生类）从另一个类（称为基类或父类）中继承属性和行为（成员变量和成员函数）
 * 继承的主要目的是实现代码复用和扩展已有的功能。
 *
 * 语法
 * class 基类名 { 基类成员 };
 * class 派生类名 : 继承方式 基类名 { 派生类的新增成员 };
 *
 * 继承方式
 * public 继承: 基类的 public 成员在派生类中保持为 public，protected 成员保持为 protected。
 * protected 继承：基类的 public 和 protected 成员在派生类中都变为 protected。
 * private 继承：基类的 public 和 protected 成员在派生类中都变为 private。
 */

// 基类
class Phone001 {
    
// 父类声明的友元函数是父类的特定成员，子类不能直接继承这些友元关系。
friend class Phone_543;

// 构造函数不会被继承，因为子类需要定义自己的构造函数。
// 析构函数会在子类销毁时被自动调用，但子类不能直接继承和调用父类的析构函数。
// 子类共享父类的静态成员变量，但不能“继承”它们（即不能重新声明这些静态成员变量），子类可以通过父类的作用域访问这些静态成员。
public:
    Phone001(){ cout << "Phone001构造方法调用" << endl; }
    ~Phone001(){ cout << "Phone001析构方法调用" << endl; }
    static void phone001StaticFunction(){ cout << "父类静态方法" << endl;}

// 父类的私有成员，不能被子类直接访问或调用
// 可以通过父类的 public 或 protected 成员间接访问，或者通过友元函数访问
private:
    string phone001pPrivateAttr;
    void phone001PrivateFunction(){ cout << "父类private方法" << endl;}

// 父类受保护成员（protected）
// 子类可以直接访问基类的受保护成员（包括变量和方法），但只能在子类的内部使用，不能通过子类的对象直接访问。
protected:
    string phone001ProtectedAttr;
    void phone001ProtectedFunction(){ cout << "父类protected方法" << endl;}

// 父类公开成员
// 子类对象可以直接访问
public:
    string phone001PublicAttr;
    void phone001PublicFunction(){ cout << "父类public方法" << endl; }
};

// 子类
class Phone002: public Phone001{
public:
    void phone002PublicFunction(){ cout << "Phone002 public方法" << endl; }
};

// 孙类
class Phone003: public Phone002{ };

int main3213() {
    Phone002 p2;
    p2.phone001PublicFunction();
    p2.phone001StaticFunction();

    Phone003 p3;
    p3.phone001PublicFunction();
    p3.phone001StaticFunction();
    p3.phone002PublicFunction();

    return 0;
}

// 多继承
// C++ 支持多继承，即一个类可以同时从多个基类继承：
class Phone004{};
class Phone005: public Phone002,public Phone004{};

/**
 * 多态
 * 通过基类的指针或引用来调用派生类中的方法，从而实现不同的行为。简而言之，多态允许相同的接口根据不同的对象表现出不同的行为。
 * 编译时多态（静态多态）：通过函数重载和运算符重载实现的多态，在编译时确定调用哪个函数。
 * 运行时多态（动态多态）：通过继承和虚函数实现的多态，调用哪个函数在运行时决定。
*/
class Animal {
public:
    virtual void makeSound() const {  // 虚函数
        cout << "Animal makes sound!" << endl;
    }

    virtual ~Animal() {}  // 虚析构函数，确保通过基类指针删除派生类对象时能正确调用派生类的析构函数
};

class Dog : public Animal {
public:
    void makeSound() const override {  // 重写基类的虚函数
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {  // 重写基类的虚函数
        cout << "Cat meows!" << endl;
    }
};

int main232() {
    Animal* animal1 = new Dog();  // 基类指针指向派生类对象
    Animal* animal2 = new Cat();  // 基类指针指向派生类对象

    animal1->makeSound();  // 调用 Dog 的 makeSound
    animal2->makeSound();  // 调用 Cat 的 makeSound

    delete animal1;  // 删除对象时会调用派生类的析构函数
    delete animal2;

    return 0;
}

/**
 * 抽象类
 * Animal1 类中的 makeSound() 被声明为纯虚函数（= 0），这意味着 Animal 是一个抽象类，不能直接实例化。
 * Dog 类必须提供 makeSound() 的实现，否则 Dog 也会成为抽象类。
 */
class Animal1 {
public:
    virtual void makeSound() const = 0;  // 纯虚函数
};