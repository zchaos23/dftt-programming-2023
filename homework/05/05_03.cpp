/*
课程：程序设计_2023
课程作业：05_03
作业题目：05_03.cpp
实现一个名为 Point 的类，其中包含 x y 坐标私有成员变量，包含使用点坐标进行初始化
的构造函数，包含可以显⽰和更改 x y 值的成员函数。
实现一个名为 Rectangle 的类，以公有方式继承 Point 类，同时新定义代表长度和宽度的
私有成员变量，包含使用点坐标、长、宽进行初始化的构造函数，并实现成员函数来计算
矩形的面积和周长。
在主程序中使用 Point 和 Rectangle 类生成对象，计算面积和周长。
*/

#include <iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xCoordinate, double yCoordinate) : x(xCoordinate), y(yCoordinate) {}

    void showPointCoordinates() {
        cout << "The x and y coordinates of the point are: " << x << ", " << y << "." << endl;
    }
    
    void updatePointCoordinates(double newX, double newY) {
        x = newX;
        y = newY;
    }
};

class Rectangle : public Point {
private:
    double length, width;

public:
    Rectangle(double xCoordinate, double yCoordinate, double len, double wid)
        : Point(xCoordinate, yCoordinate), length(len), width(wid) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Point myPoint(1, 2);
    Rectangle myRectangle(1, 2, 3, 4);

    cout << "The area and perimeter of the rectangle are: " << myRectangle.calculateArea() << ", " << myRectangle.calculatePerimeter() << "." << endl;

    return 0;
}
