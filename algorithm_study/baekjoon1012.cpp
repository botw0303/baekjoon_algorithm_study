#include <iostream>
using namespace std;

int testcase;
int row, col, num, x, y, cnt;
int board[51][51];
bool visited[51][51];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };

void DFS(int i, int j) {
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (board[ny][nx] == 1 && !visited[ny][nx]) {
			DFS(ny, nx);
		}
	}
	return;
}

int main() {
	cin >> testcase;
	while (testcase--) {
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		cin >> row >> col >> num;
		for (int i = 0; i < num; i++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
	}
}