#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 1;
	vector<int> answers;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		answers.push_back(0);
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == 'O') {
				answers[i] += cnt;
				cnt++;
			}
			else if (input[j] == 'X') cnt = 1;
		}
		cnt = 1;
	}
	for (int elem : answers) {
		cout << elem << "\n";
	}
}