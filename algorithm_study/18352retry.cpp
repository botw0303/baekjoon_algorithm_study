#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, k, x;
vector<vector<int>> maps;
vector<int> visited;
vector<int> answer;

void BFS() {
	queue<int> q;
	q.push(x);
	visited[x] = 0;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int elem : maps[now]) {
			if (visited[elem] == -1) {
				visited[elem] = visited[now] + 1;
				if (visited[elem] == k)
					answer.push_back(elem);
				q.push(elem);
			}
		}
	}
}

int main() {
	cin >> n >> m >> k >> x;
	maps.resize(n + 1, vector<int>());
	visited.resize(n + 1, -1);
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		maps[a].push_back(b);
	}
	BFS();
	sort(answer.begin(), answer.end());
	if (answer.empty()) {
		cout << -1;
	}
	else {
		for (int elem : answer) {
			cout << elem << "\n";
		}
	}
}