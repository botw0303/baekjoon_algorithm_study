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
		answer += str[i];																			//�� ���ڿ��� �Է� ���ڿ��� �ϳ��� �߰�
		if (str[i] == bombStr.back() && answer.size() >= bombStr.size()) {							/*�Է� ���ڿ�[i] ���� ���� ���ڿ� �� ���� ����
																									�� ���ڿ��� ũ�Ⱑ ���� ���ڿ��� ũ�⺸�� ũ�ų� ���� ���*/
			string substr = answer.substr(answer.size() - bombStr.size(), bombStr.size());			//�� ���ڿ��� ���� ���ڿ��� ũ�� ��ŭ ����

			if (substr == bombStr) {																//�� ���ڿ���  ���� ���ڿ��� ���� ���
				answer.erase(i - (bombStr.size() - 1), bombStr.size());								//�� ���ڿ����� �ش� �κ��� ����
			}
		}

	}
	if (answer == bombStr) answer.clear();															//���� ���ڿ��� ������ ��� ����
	if (!answer.empty()) {																			//���ڿ��� ������� ���� ��� ���
		cout << answer;
	}
	else {																							//���ڿ��� ������� ��� FRULA ���
		cout << "FRULA";
	}
}