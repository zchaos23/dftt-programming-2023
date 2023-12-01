/*
课程：程序设计_2023
课程作业：05_01
作业题目：05_01.cpp
实现⼀个名为 Circle 的类，其中包含“半径”私有成员变量，包含构造函数，包含计算圆的
⾯积和周⻓的成员函数。在主程序中，使⽤该类⽣成对象并⽤半径值初始化，调⽤成员函
数计算⾯积和周⻓。
*/

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;
    cout << "Please enter the value of the circle's radius: ";
    cin >> radius;

    Circle myCircle(radius);

    double area = myCircle.calculateArea();
    double perimeter = myCircle.calculatePerimeter();

    cout << "Area of the circle is: " << area << endl;
    cout << "Perimeter of the circle is: " << perimeter << endl;

    return 0;
}
