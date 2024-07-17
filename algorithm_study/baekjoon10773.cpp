#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int k, total = 0;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int input;
		cin >> input;
		if (input == 0) {
			s.pop();
		}
		else {
			s.push(input);
		}
	}
	while (s.size() != 0) {
		total += s.top();
		s.pop();
	}
	cout << total;
}