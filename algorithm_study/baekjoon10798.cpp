#include <iostream>
using namespace std;

int main() {
	string str[5];
	for (int i = 0; i < 5; i++) {
		string input;
		cin >> input;
		str[i] = input;
	}
	for (int i = 0; i < 15; i++) { //�Է� �ִ� ���ڼ��� 15���� �ݺ�
		for (int j = 0; j < 5; j++) {
			if (str[j].size() < i + 1) continue; //�Էµ� ���ڿ��� ũ�Ⱑ 15 �̸��̸� ���� ���ڿ��� �̵�
			else cout << str[j][i];
		}
	}
}