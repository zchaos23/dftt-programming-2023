/*
课程：程序设计_2023
课程作业：04_03
作业题目：04_03.cpp
2739：计算对数
http://bailian.openjudge.cn/practice/2739
提⽰：while循环即可，但要注意应该⽤什么数据类型才能满⾜题⽬要求
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double a, b;
    int x = 0;
    bool f, s, r;
    cin >> a >> b;

    do {
        f = ((x <= (log(b) / log(a))) && ((x + 1) > (log(b) / log(a))));
        s = ((pow(a, x) <= b) && (pow(a, x + 1) > b));
        r = f || s;
        x++;
    } while (!r);
    
    cout << x-1 << endl;

    return 0;
}