#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<pair<int, int>> A, B;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		A.push_back(make_pair(input, 0));
	}
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A.size(); j++) {
			if (A[i].first > A[j].first) {
				++A[i].second;
			}
			else if (A[i].first == A[j].first && i > j) {
				++A[i].second;
			}
		}
	}
	for (int i = 0; i < A.size(); i++) {
		cout << A[i].second << " ";
	}
}