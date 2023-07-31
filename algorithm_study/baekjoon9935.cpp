#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	string str, bombStr, answer;
	bool check;
	cin >> str >> bombStr;
	for (int i = 0; i < str.size(); i++) {
		answer += str[i];
		if (bombStr.back() == answer.back()) {
			check = true;
			if (answer.size() < bombStr.size()) continue;
			for (int j = 0; j < bombStr.size(); j++) {
				if (answer[answer.size() - bombStr.size() + j] != bombStr[j]) {
					check = false;
					break;
				}
			}
			if (check) {
				for (int k = 0; k < bombStr.size(); k++) {
					answer.pop_back();
				}
			}
		}
	}
	if (answer.empty())
		cout << "FRULA" << "\n";
	else
		cout << answer << "\n";
}