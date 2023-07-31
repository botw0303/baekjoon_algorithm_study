#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<string> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (v[j].size() < v[j - 1].size()) {
				string temp = v[j];
				v[j] = v[j - 1];
				v[j = 1] = temp;
			}
			else if (v[j].size() == v[j - 1].size()) {
				for(int )
			}
		}
	}
}