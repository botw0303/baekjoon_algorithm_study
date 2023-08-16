#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	vector<string> sv;
	for (int i = 0; i < 3; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	while (v[0] != 0 && v[1] != 0 && v[2] != 0) {
		sort(v.begin(), v.end());
		if ((v[0] * v[0]) + (v[1] * v[1]) == (v[2] * v[2])) {
			sv.push_back("right");
		}
		else {
			sv.push_back("wrong");
		}
		cin >> v[0] >> v[1] >> v[2];
	}
	for (int i = 0; i < sv.size(); i++) {
		cout << sv[i] << "\n";
	}
}