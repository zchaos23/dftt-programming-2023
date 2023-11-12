/*
课程：程序设计_2023
课程作业：04_06
作业题目：04_06.cpp
2746：约瑟夫问题
http://bailian.openjudge.cn/practice/2746
*/

#include <iostream>
using namespace std;

int josephus(int n, int m) {
    if (n == 1) {
        return 1;
    }
    else {
        return (josephus(n - 1, m) + m - 1) % n + 1;
    }
}

int main()
{
    int n, m;
    do {
        cin >> n >> m;

        if (n != 0 && m != 0) {
            cout << josephus(n, m) << endl;
        }
    } while (n != 0 && m != 0);

    return 0;
}