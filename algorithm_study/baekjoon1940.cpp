#include <iostream>
#include <vector>
using namespace std;

int main() {
	int ingredientNum, needNumToArmor, result = 0;
	vector<int> ingredients;

	cin >> ingredientNum >> needNumToArmor;
	for (int i = 0; i < ingredientNum; ++i) {
		int input;
		cin >> input;
		ingredients.push_back(input);
	}

	for (int i = 0; i < ingredients.size(); ++i) {
		for (int j = i + 1; j < ingredients.size(); ++j) {
			if (ingredients[i] + ingredients[j] == needNumToArmor) {
				result++;
			}
		}
	}

	cout << result;
}