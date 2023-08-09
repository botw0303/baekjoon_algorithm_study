#include <iostream>
using namespace std;

int main() {
	int h, m, total = 0;
	cin >> h >> m;
	total = h * 60 + m - 45;
	if (total < 45) total += 1440;
	m = total % 60;
	total -= m;
	h = total / 60 % 24;
	cout << h << " " << m << "\n";
}