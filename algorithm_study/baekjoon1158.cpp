#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//yet
int main() {
	int n, k, cnt = 0;
	queue<int> q;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	while (q.size() > 0) {
		for (int i = 0; i < 3; i++) {

		}
	}
	
	/*int n, k, front = 0, cnt = 0;
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		v.push_back(i + 1);
	}
	int size = v.size();
	cout << "<";
	while (n > 1) {
		front = (front + 1) % v.size();
		if (cnt == 3) {
			cout << v[((front + 1) % v.size())] << ", ";

		}
		else {
			front++;
			cnt++;
		}
	}
	cout << v.front() << ">";*/
}