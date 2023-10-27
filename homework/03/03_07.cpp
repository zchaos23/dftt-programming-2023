/*
课程：程序设计_2023
课程作业：03_07
作业题目：03_07.cpp Bonus 2: 石头剪刀布游戏
根据下述流程，使用 while, do while, switch, if 等结构编写石头剪刀布游戏。
提示：将玩家和电脑的“石头”“剪刀”“布”用数字 0、1、2 取代，计算玩家输入值与电脑随机值的差，作为判定依据。电脑随机值可用 rand() % 3 生成。
*/


#include <iostream>
using namespace std;

int main() {
	int playerChoice, computerChoice, result;
	int keepPlay = 1;

	do {
		computerChoice = rand() % 3;

		do {
			cout << "Please input your choice: ( 0 = Rock, 1 = Scissors, 2 = Paper )" << endl;
			cin >> playerChoice;
			if (playerChoice < 0 || playerChoice > 2) { cout << "Your input is incorrect! Please retry." << endl; }
		} while (playerChoice < 0 || playerChoice > 2);

		result = playerChoice - computerChoice;

		switch (result) {
		case 0:
			cout << "You draw." << endl;
			break;
		case 1: case -2:
			cout << "You lose." << endl;
			break;
		case -1: case 2:
			cout << "You win!" << endl;
			break;
		}

		if (result != 0) {
			cout << "Do you want to play another round? Insert 1 to play or 0 to quit." << endl;
			cin >> keepPlay;
		}
	} while (keepPlay == 1);

	return 0;
}