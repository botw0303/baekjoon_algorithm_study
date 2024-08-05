#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, int>> vec;
	vector<int> answer;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}

	for (int i = 0; i < n; ++i)
	{
		answer.push_back(1);
		for (int j = 0; j < n; ++j)
		{
			if (vec[i].first < vec[j].first && vec[i].second < vec[j].second)
				answer[i] += 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << answer[i] << " ";
	}
}