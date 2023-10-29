#include <iostream>
using namespace std;
int x, n = 1;
int main() {
	cin >> x;
	while (x > n) {
		x -= n;
		++n;
	}
	if (n % 2 != 0)
		cout << n + 1 - x << "/" << x;
	else
		cout << x << "/" << n + 1 - x;
}