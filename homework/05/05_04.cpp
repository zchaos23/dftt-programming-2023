/*
课程：程序设计_2023
课程作业：05_04
作业题目：05_04.cpp
实现⼀个名为 Student 的类，该类具有表⽰姓名、班级、学号、分数的私有成员变量。
设计成员函数，显⽰学⽣的信息，并根据分数输出成绩（按分数段⾃⾏划分ABCD）。设
计静态变量 count，在主函数中统计根据该类新建的对象总数，并输出。
*/

#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int cls, id, score;
	static int count;

public:
	Student(string studentName, int studentClass, int studentID, int studentScore) : name(studentName), cls(studentClass), id(studentID), score(studentScore) {
		count++;
	}

	void showStudentInfo() {
		cout << "Name: " << name << endl;
		cout << "Class: " << cls << endl;
		cout << "ID: " << id << endl;
		if (score >= 90) {
			cout << "Score: A" << endl;
		}
		else if (score >= 80) {
			cout << "Score: B" << endl;
		}
		else if (score >= 60) {
			cout << "Score: C" << endl;
		}
		else {
			cout << "Score: D" << endl;
		}
	}

	static int printCount() {
		return count;
	}
};

int Student::count = 0;

int main() {
	Student Steve("Steve", 2, 1, 80);
	Student Alex("Alex", 3, 2, 75);
	Student Me("Zfm", 4, 221112013, 61);

	Steve.showStudentInfo();

	cout << "Count: " << Student::printCount() << endl;

	return 0;
}