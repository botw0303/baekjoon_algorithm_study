
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>

// numbers_len�� �迭 numbers�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
std::vector<int> solution(int numbers[], size_t numbers_len, const char* direction) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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