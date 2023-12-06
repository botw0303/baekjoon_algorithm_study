#include <iostream>
#include <vector>
using namespace std;

long long arr[10001] = { 1, 1, 1, 2, 2, 3 };
vector<long long> v;

long long Fibonacci(long long n) {

	if (arr[n] == 0) {
		arr[n] = Fibonacci(n - 3) + Fibonacci(n - 2);
		//arr[n] = Fibonacci(n - 1) + Fibonacci(n - 5);
		return arr[n];
	}

	return arr[n];
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	long long n = 0;
	cin >> n;
	for (long long i = 0; i < n; ++i) {
		int input;
		cin >> input;
		v.push_back(Fibonacci(input - 1));
	}
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << "\n";
	}
}