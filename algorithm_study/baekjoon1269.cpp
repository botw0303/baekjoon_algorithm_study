#include <iostream>
#include <map>
using namespace std;

map<int, bool> m;   // key�� ��������, value�� bool�� ���� ������ map ����
int N, M;
int num;

int main(void)
{
    cin >> N >> M;  // N�� M�� �Է¹���
    for (int i = 0; i < N + M; i++)  // N+M���� ���� �Է¹���
    {
        cin >> num;
        if (m[num] == true)  // �Է¹��� ���� �̹� �����ϴ� ���
            m.erase(num);   // �ش� ���� map���� ����
        else                // �Է¹��� ���� �������� �ʴ� ���
            m[num] = true;  // �ش� ���� map�� �߰�
    }
    cout << m.size();   // ���� map�� ũ�⸦ ���
}