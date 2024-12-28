#include <fstream>
#include <iostream>
using namespace std;

/**
 * <fstream> 是 C++ 标准库中的一个头文件，提供了文件输入和输出的功能。它定义了用于文件操作的类和相关功能，可以方便地读写文件内容。
 * <fstream> 定义了三个与文件操作相关的类：
 * std::ifstream	用于读取文件内容（输入流，read-only）
 * std::ofstream	用于写入文件内容（输出流，write-only）
 * std::fstream	    既可读取也可写入文件内容（读写流，read/write）
 * 这些类继承自 std::istream 和 std::ostream，因此可以使用标准输入/输出流的成员函数和操作符。
 */

/**
 * 文件类型分为两种：
 * 文本文件: 文件以文本的ASCII码形式存储在计算机中
 * 二进制文件:文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
 */

// 写文本文件
int main32343(){
    // 创建流对象
    ofstream ofs;

    // 打开文件
    ofs.open("test.txt", ios::out);

    // 写数据
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    // 关闭文件
    ofs.close();
    return 0;
}

// 读文本文件
int main2344(){
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open()){
        cout << "文件打开失败" << endl;
        return 0;
    }

    string buf;
    while (getline(ifs, buf))
    {
    	cout << buf << endl;
    }

    return 0;
}

class Person33
{
public:
    char m_Name[64];
    int m_Age;
};

// 写二进制文件
int main213s(){

    ofstream ofs;
    ofs.open("person.txt", ios::out | ios::binary);

    Person33 p = {"zhangsan"  , 18};

    ofs.write((const char *)&p, sizeof(p));

    ofs.close();

    return 0;
}

// 读二进制文件
int main23y3(){
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()){
        cout << "文件打开失败" << endl;
    }

    Person33 p;
    ifs.read((char *)&p, sizeof(p));
    cout  << p.m_Name << p.m_Age << endl;

    return 0;
}

