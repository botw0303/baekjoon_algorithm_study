#include <iostream>
#include <map>
using namespace std;

map<int, bool> m;   // key로 정수형을, value로 bool형 값을 가지는 map 생성
int N, M;
int num;

int main(void)
{
    cin >> N >> M;  // N과 M을 입력받음
    for (int i = 0; i < N + M; i++)  // N+M개의 수를 입력받음
    {
        cin >> num;
        if (m[num] == true)  // 입력받은 수가 이미 존재하는 경우
            m.erase(num);   // 해당 수를 map에서 제거
        else                // 입력받은 수가 존재하지 않는 경우
            m[num] = true;  // 해당 수를 map에 추가
    }
    cout << m.size();   // 남은 map의 크기를 출력
}