#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, h, w, n;
	vector<int> answer;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int roomNum = 0;
		if (n % h == 0) {
			roomNum = h * 100;
			roomNum += n / h;
		}
		else {
			roomNum = n % h * 100;
			roomNum += n / h + 1;
		}
		answer.push_back(roomNum);
	}
	for (int elem : answer) {
		cout << elem << "\n";
	}
}