#include <iostream>
using namespace std;

int main() {
	string str[5];
	for (int i = 0; i < 5; i++) {
		string input;
		cin >> input;
		str[i] = input;
	}
	for (int i = 0; i < 15; i++) { //입력 최대 글자수인 15까지 반복
		for (int j = 0; j < 5; j++) {
			if (str[j].size() < i + 1) continue; //입력된 문자열의 크기가 15 미만이면 다음 문자열로 이동
			else cout << str[j][i];
		}
	}
}