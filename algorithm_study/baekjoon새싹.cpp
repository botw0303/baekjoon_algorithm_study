#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	vector<int> v, answer;
	for (int i = 0; i < 30; i++) {
		answer.push_back(i + 1);
	}
	for (int i = 0; i < 28; i++) {
		int input;
		cin >> input;
		for (int j = 0; j < answer.size(); j++) {
			if (answer[j] == input) answer.erase(answer.begin() + j);
		}
	}
	for (int elem : answer) {
		cout << elem << "\n";
	}
}