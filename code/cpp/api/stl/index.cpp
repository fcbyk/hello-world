#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * 容器（Containers）
 * 容器是 STL 中用来存储数据的组件
 * 序列式容器（按顺序存储数据）：vector、deque、list、array、forward_list
 * 关联式容器（基于键值对存储数据）：set、multiset、map、multimap
 * 无序容器（基于哈希表，C++11 引入）：unordered_set、unordered_multiset、unordered_map、unordered_multimap
 */
vector<int> v = {1, 2, 3, 4, 5};

void containers(){
    // 添加元素
    v.push_back(6);     // 尾部添加元素
    v.insert(v.begin(), 0);  // 在指定位置插入元素

    // 删除元素
    v.pop_back();       // 删除最后一个元素
    v.erase(v.begin()); // 删除指定位置的元素
    v.clear();          // 清空所有元素

    // 访问元素
    int x = v[1];       // 下标访问，无越界检查
    int y = v.at(1);    // 带越界检查的访问
    int z = v.front();  // 返回第一个元素
    int w = v.back();   // 返回最后一个元素

    // 容量相关
    size_t size = v.size();     // 当前元素数量
    size_t capacity = v.capacity(); // 当前容量
    v.reserve(20);              // 预留容量以避免频繁分配内存
    v.shrink_to_fit();          // 收缩容量以适应实际大小
}

/**
 * 迭代器（Iterators）
 * 连接容器和算法
 * 迭代器是一个抽象工具，用于访问容器中的元素。常见的迭代器类型
 * 输入迭代器：只读访问。
 * 输出迭代器：只写访问。
 * 前向迭代器：可读写，支持向前移动。
 * 双向迭代器：可读写，支持向前和向后移动。
 * 随机访问迭代器：支持随机访问，如 vector 和 deque。
 */
void iterators(){
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";

    // 使用范围 for 循环（C++11）
    for (int x : v) cout << x << " ";
}

/**
 * 算法（Algorithms）
 * 对数据执行操作
 * STL 提供了许多通用算法，如排序、查找、删除、复制、变换
*/
void algorithms() {
    // 使用 for_each 算法，结合迭代器遍历容器并打印元素
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;

    // 使用 transform 将每个元素乘以 2，修改原容器内容
    transform(v.begin(), v.end(), v.begin(), [](int x) {
        return x * 2;
    });

    // 打印修改后的容器
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 使用 find 查找元素
    auto it = find(v.begin(), v.end(), 6); // 查找元素 6
    if (it != v.end()) {
        cout << "Found 6 at position: " << distance(v.begin(), it) << endl;
    } else {
        cout << "6 not found" << endl;
    }

    // 使用 sort 排序元素
    sort(v.begin(), v.end());

    // 打印排序后的容器
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

/**
 * 仿函数（Function Objects）
 * 将函数与算法结合使用
 * 实现和JavaScript一样，函数可以作为参数传递以及作为返回值
*/
class Counter {
private:
    int count;  // 计数器

public:
    Counter() : count(0) {}

    // 重载 operator()，在每次调用时增加计数
    void operator()(int x) {
        cout << "Processing " << x << endl;
        count++;  // 每次调用增加计数
    }

    int getCount() const {
        return count;  // 返回处理次数
    }
};

void functionObjects() {
    // 创建 Counter 对象
    Counter counter;

    // 使用 for_each 来调用 Counter 仿函数
    for_each(v.begin(), v.end(), counter);

    // 输出处理的次数
    cout << "Function was called " << counter.getCount() << " times." << endl;
}
