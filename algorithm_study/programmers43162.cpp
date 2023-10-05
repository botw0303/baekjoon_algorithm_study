#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> computerss;
bool visited[201];
int num;

void DFS(int idx) {
    for (int i = 0; i < num; i++) {
        if (idx == i) continue;
        if (!visited[i] && computerss[idx][i]) {
            visited[i] = true;
            DFS(i);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    fill_n(visited, n, false);
    num = n;
    computerss = computers;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            DFS(i);
            answer++;
        }
    }

    return answer;
}

int main() {

}