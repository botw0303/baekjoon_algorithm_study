#include <iostream>
#include <vector>

using namespace std;

int n, highScore = -1;
vector<float> scoreVec;

void SetHighScore() {
	for (int i = 0; i < scoreVec.size(); ++i) {
		if (scoreVec[i] > highScore) highScore = scoreVec[i];
	}
}

void CalcNewScore() {
	for (int i = 0; i < scoreVec.size(); ++i) {
		scoreVec[i] = scoreVec[i] / highScore * 100.f;
	}
}

float CalcScoreAvg() {
	float total = 0;

	for (int i = 0; i < scoreVec.size(); ++i) {
		total += scoreVec[i];
	}

	return total / scoreVec.size();
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		float input;
		cin >> input;
		scoreVec.push_back(input);
	}

	SetHighScore();
	CalcNewScore();
	cout << CalcScoreAvg();
}