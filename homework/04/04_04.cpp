/*
课程：程序设计_2023
课程作业：04_04
作业题目：04_04.cpp
2689：⼤⼩写字⺟互换
http://bailian.openjudge.cn/practice/2689
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    // 遍历字符串，进行大小写字母的互换
    for (char& ch : input) {
        if (std::isupper(ch)) {
            ch = std::tolower(ch);
        }
        else if (std::islower(ch)) {
            ch = std::toupper(ch);
        }
    }

    // 输出结果
    std::cout << input << std::endl;

    return 0;
}
