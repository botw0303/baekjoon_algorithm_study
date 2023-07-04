#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	map<string, bool> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		string state;
		cin >> name >> state;
		if (m.find(name) != m.end()) {
			if(state == "enter") m.find(name)->second = true;
			else if(state == "leave") m.find(name)->second = false;
		}
		else {
			m.insert(make_pair(name, true));
		}
	}
	for (auto iter = --m.end(); iter != --m.begin(); iter--) {
		if (iter->second != false) {
			cout << iter->first << "\n";
		}
	}
}