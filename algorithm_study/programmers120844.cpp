
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>

// numbers_len은 배열 numbers의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
std::vector<int> solution(int numbers[], size_t numbers_len, const char* direction) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(3);

    std::vector<int> v;

    if (direction == "left") {
        int temp = numbers[numbers_len - 1];
        for (int i = 0; i < numbers_len - 1; i++) {
            v.push_back(numbers[i]);
        }
        v.push_back(temp);
    }
    else {
        int temp = numbers[0];
        for (int i = 1; i < numbers_len - 1; i++) {
            v.push_back(numbers[i]);
        }
        v.push_back(temp);
    }

    return v;
}

int main() {
    int numbers[] = { 1, 2, 3 };
    solution(numbers, 3, "right");
}