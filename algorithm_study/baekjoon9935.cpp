#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	string str, bombStr, answer;
	cin >> str >> bombStr;
	for (int i = 0; i < str.size(); i++) {
		answer += str[i];																			//답 문자열에 입력 문자열을 하나씩 추가
		if (str[i] == bombStr.back() && answer.size() >= bombStr.size()) {							/*입력 문자열[i] 값과 폭발 문자열 끝 값이 같고
																									답 문자열의 크기가 폭발 문자열의 크기보다 크거나 같을 경우*/
			string substr = answer.substr(answer.size() - bombStr.size(), bombStr.size());			//새 문자열에 폭발 문자열의 크기 만큼 삽입

			if (substr == bombStr) {																//새 문자열이  폭발 문자열과 같을 경우
				answer.erase(i - (bombStr.size() - 1), bombStr.size());								//답 문자열에서 해당 부분을 삭제
			}
		}

	}
	if (answer == bombStr) answer.clear();															//만약 문자열이 남았을 경우 삭제
	if (!answer.empty()) {																			//문자열이 비어있지 않을 경우 출력
		cout << answer;
	}
	else {																							//문자열이 비어있을 경우 FRULA 출력
		cout << "FRULA";
	}
}