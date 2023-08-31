#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int visited[101][101];

queue<pair<int, int>> que;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int solution(vector<vector<int> > maps)
{
    int answer = -1;

    que.push({ 0, 0 });
    fill_n(&visited[0][0], 101 * 101, -1);
    visited[0][0] = 1;
    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= maps.size() || ny >= maps[0].size()) continue;
            if (maps[nx][ny] == 1 && visited[nx][ny] == -1) {
                que.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }

    return visited[maps.size() - 1][maps[0].size() - 1];
}

int main() {
    vector<vector<int>> vec = { {1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 1}, {0, 0, 0, 0, 1} };
    cout << solution(vec);
}