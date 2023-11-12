/*
课程：程序设计_2023
课程作业：04_02
作业题目：04_02.cpp
2753：菲波那契数列
http://bailian.openjudge.cn/practice/2753/
提⽰：使⽤while循环，读取⼀⾏输出⼀个结果，使⽤⼀个递归函数实现
*/

#include <iostream>
using namespace std;

void fibonacci(int a, int num_a, int num_b)
{
    if (a == 1) {
        cout << num_a << endl;
        return;
    }
    else {
        int num = num_a + num_b;
        fibonacci(a - 1, num_b, num);
    }
}

int main()
{
    int n, a;
    cin >> n;
    while (n--) {
        cin >> a;
        fibonacci(a, 1, 1);
    }
    return 0;
}