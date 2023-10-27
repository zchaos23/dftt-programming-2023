/*
�γ̣��������_2023
�γ���ҵ��03_07
��ҵ��Ŀ��03_07.cpp Bonus 2: ʯͷ��������Ϸ
�����������̣�ʹ�� while, do while, switch, if �Ƚṹ��дʯͷ��������Ϸ��
��ʾ������Һ͵��Եġ�ʯͷ���������������������� 0��1��2 ȡ���������������ֵ��������ֵ�Ĳ��Ϊ�ж����ݡ��������ֵ���� rand() % 3 ���ɡ�
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