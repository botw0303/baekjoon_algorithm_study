#include <iostream>
#include <vector>
using namespace std;

int answer = 0;
int targetNum;
int visited[51]{ 0 };
vector<int> v;

void DFS(int n, char sign) {
	if(sign == '+')
		visited[n] = visited[n - 1] + v[n];
	else
		visited[n] = visited[n - 1] - v[n];
	if (n + 1 == v.size()) {
		if (visited[n] == targetNum) {
			answer++;
		}
		return;
	}
	DFS(n + 1, '+');
	DFS(n + 1, '-');
}

int solution(vector<int> numbers, int target) {
	targetNum = target;
	v = numbers;
	DFS(0, '+');
	DFS(0, '=');
	return answer;
}