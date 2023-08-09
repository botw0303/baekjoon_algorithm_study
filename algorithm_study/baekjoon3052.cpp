#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		s.insert(input % 42);
	}
	cout << s.size();
}