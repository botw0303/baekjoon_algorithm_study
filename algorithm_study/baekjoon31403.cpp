#include <iostream>
#include <string>

using namespace std;

int a, b, c;

int main() {
	cin >> a >> b >> c;

	cout << a + b - c;

	string cab;
	cab = to_string(a) + to_string(b);

	cout << "\n" << stoi(cab) - c;
}