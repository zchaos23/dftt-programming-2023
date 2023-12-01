/*
课程：程序设计_2023
课程作业：05_02
作业题目：05_02.cpp
实现⼀个名为 Triangle 的类，该类具有表⽰其三边⻓度的私有成员变量，包含使⽤三边
⻓度进⾏初始化的构造函数。设计成员函数，⽤于确定三⾓形是等边三⾓形、等腰三⾓
形，还是不等边三⾓形，打印结果。在主程序中设计数据输⼊并实现判断。
*/

#include <iostream>
using namespace std;

class Triangle {
private:
    double sideA, sideB, sideC;

public:
    Triangle(double sA, double sB, double sC) : sideA(sA), sideB(sB), sideC(sC) {}

    void printTriangleType() {
        if (sideA == sideB && sideB == sideC) {
            cout << "This triangle is an equilateral triangle." << endl;
        }
        else if (sideA == sideB || sideB == sideC || sideA == sideC) {
            cout << "This triangle is an isosceles triangle." << endl;
        }
        else {
            cout << "This triangle is not an equilateral triangle or an isosceles triangle." << endl;
        }
    }
};

int main() {
    double sideA, sideB, sideC;
    cout << "Please enter the lengths of the three sides of the triangle: " << endl;
    cin >> sideA >> sideB >> sideC;

    Triangle myTriangle(sideA, sideB, sideC);
    myTriangle.printTriangleType();

    return 0;
}
