/*
课程：程序设计_2023
课程作业：05_Bonus
作业题目：05_Bonus.cpp
实现⼀个名为 Shape 的类，设计成员函数（虚函数 使⽤virtual关键字）⽤于计算⾯积和
周⻓。从 Shape 类派⽣出 Circle、Rectangle 和 Triangle 等类，并重写派⽣类的虚函数
（override 关键字）。在主程序中新建上述派⽣类对象，实现初始化与⾯积周⻓计算打印。
*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
	virtual double calculateArea() const = 0;
	virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape{
private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	double calculateArea() const override {
		return 3.14159 * radius * radius;
	}

	double calculatePerimeter() const override {
		return 2 * 3.14159 * radius;
	}
};

class Rectangle : public Shape {
private:
	double length, width;

public:
	Rectangle(double len, double wid) : length(len), width(wid) {}

	double calculateArea() const override {
		return length * width;
	}

	double calculatePerimeter() const override {
		return 2 * (length + width);
	}
};

class Triangle : public Shape {
private:
	double sideA, sideB, sideC;

public:
	Triangle(double sA, double sB, double sC) : sideA(sA), sideB(sB), sideC(sC) {}

	double calculateArea() const override {
		double s = (sideA + sideB + sideC) / 2;
		return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	}

	double calculatePerimeter() const override {
		return sideA + sideB + sideC;
	}
};

int main() {
	Circle myCircle(5.0);
	Rectangle myRectangle(4.0, 6.0);
	Triangle myTriangle(3.0, 4.0, 5.0);

	cout << "Circle:" << endl;
	cout << "  Area: " << myCircle.calculateArea() << endl;
	cout << "  Perimeter: " << myCircle.calculatePerimeter() << endl;

	cout << "Rectangle:" << endl;
	cout << "  Area: " << myRectangle.calculateArea() << endl;
	cout << "  Perimeter: " << myRectangle.calculatePerimeter() << endl;

	cout << "Triangle:" << endl;
	cout << "  Area: " << myTriangle.calculateArea() << endl;
	cout << "  Perimeter: " << myTriangle.calculatePerimeter() << endl;

	return 0;
}
