#include <iostream>
using namespace std;

int main() {
	int answer[10] = { 0 };
	int a, b, c, mulVal;
	cin >> a >> b >> c;
	mulVal = a * b * c;
	for (int i = 10; i <= 1000000000; i * 10) {
		if (mulVal == 0) break;
		answer[mulVal % i]++;
		mulVal -= mulVal % i;
		mulVal /= 10;
	}
	for (int elem : answer) {
		cout << elem << "\n";
	}
}