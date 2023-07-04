#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push_back(i + 1);
	}
	for (int i = 0; i < m; i++) {
		int input1, input2;
		cin >> input1 >> input2;
		int temp = v[input1 - 1];
		v[input1 - 1] = v[input2 - 1];
		v[input2 - 1] = temp;
	}
	for (int elem : v) {
		cout << elem << " ";
	}
}