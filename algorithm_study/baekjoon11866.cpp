#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	int n, k, cnt = 1;
	queue<int> q;
	vector<int> answer;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	while (q.size() > 0) {
		if (cnt >= k) {
			answer.push_back(q.front());
			q.pop();
			cnt = 1;
			continue;
		}
		q.push(q.front());
		q.pop();
		cnt++;

	}
	cout << "<";
	for (int i = 0; i < answer.size() - 1; i++) {
		cout << answer[i] << ", ";
	}
	cout << answer[answer.size() - 1] << ">";
}