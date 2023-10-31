#include <iostream>
#include <vector>
using namespace std;

int main() {
	int ingredientNum, needNumToArmor, result = 0, offset = 0;
	vector<int> ingredients;

	cin >> ingredientNum >> needNumToArmor;
	for (int i = 0; i < ingredientNum; ++i) {
		int input;
		cin >> input;
		ingredients.push_back(input);
	}

	//구별해주는 과정 해줘야함

	cout << result;
}