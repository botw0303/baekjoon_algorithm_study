#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	unordered_map<string, bool> um;
	for (int i = 0; i < n; ++i) {
		string jobName;
		cin >> jobName;
		um.insert(make_pair(jobName, true));
	}
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		string jobName;
		cin >> jobName;
		if (um.find(jobName) != um.end()) {
			um.find(jobName)->second = false;
		}
	}
	int cnt = 0;
	vector<string> v;
	for (pair<string, bool> elem : um) {
		if (elem.second) {
			cnt++;
			v.push_back(elem.first);
		}
	}
	cout << cnt << "\n";
	for (string elem : v) {
		cout << elem << "\n";
	}
}