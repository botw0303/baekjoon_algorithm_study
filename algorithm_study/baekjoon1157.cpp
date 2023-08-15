#include <iostream>
#include <string>
using namespace std;

int main() {
	int alphabet[26] = { 0 };
	int maxValue = -1;
	int mua = 0; //most used alphabet
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		int idx = toupper(str[i]) - 'A';
		alphabet[idx]++;
		if (alphabet[idx] > maxValue) {
			maxValue = alphabet[idx];
			mua = idx;
		}
	}
	for (int i = 0; i < 26; ++i) {
		if (alphabet[i] == maxValue && i != mua) {
			cout << "?";
			return 0;
		}
	}
	cout << (char)(mua + 'A');
}