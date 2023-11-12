/*
课程：程序设计_2023
课程作业：04_05
作业题目：04_05.cpp
2715：谁拿了最多奖学⾦
http://bailian.openjudge.cn/practice/2715
提⽰：使⽤ string 存储学⽣姓名，根据情况进⾏累加计算
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, scholarship = 0, allScholarships = 0;
	string name;
	cin >> N;

	while (N--) {
		string thisName;
		int thisScholarship = 0, avgGrade, classGrade, paperCount;
		char isLeader, isWest;

		cin >> thisName >> avgGrade >> classGrade >> isLeader >> isWest >> paperCount;

		if (avgGrade > 80 && paperCount >= 1) {
			thisScholarship += 8000;
		}
		if (avgGrade > 85 && classGrade > 80) {
			thisScholarship += 4000;
		}
		if (avgGrade > 90) {
			thisScholarship += 2000;
		}
		if (avgGrade > 85 && isWest == 'Y') {
			thisScholarship += 1000;
		}
		if (classGrade > 80 && isLeader == 'Y') {
			thisScholarship += 850;
		}

		if (thisScholarship > scholarship) {
			name = thisName;
			scholarship = thisScholarship;
		}

		allScholarships += thisScholarship;
	}

	cout << name << endl << scholarship << endl << allScholarships << endl;
}