#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<pair<int, int>> dq;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		dq.push_back(make_pair(x, y));
	}

}