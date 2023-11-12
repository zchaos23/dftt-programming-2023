/*
课程：程序设计_2023
课程作业：04_01
作业题目：04_01.cpp
4147：汉诺塔问题
http://bailian.openjudge.cn/practice/4147/
提⽰：定义⼀个move函数（三个形参），⼀个递归的hanoi函数（四个形参）
*/

#include <iostream>
using namespace std;

void hanoi(int n, string src, string dst, string mid)
{
    if (n == 0) {
        return;
    }
    else {
        hanoi(n - 1, src, mid, dst);
        cout << n << ":" << src << "->" << dst << endl;
        hanoi(n - 1, mid, dst, src);
    }
}

int main()
{
    int n;
    string src, mid, dst;
    cin >> n >> src >> mid >> dst;
    hanoi(n, src, dst, mid);
    return 0;
}