#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(), times.end());
    long long left = times.front(), right = (times.back() * (long)n), mid = (left + right) / 2;
    long long cnt = 0;
    while (left <= right) {
        cnt = 0;
        mid = (left + right) / 2;
        for (int i = 0; i < times.size(); ++i) {
            cnt += mid / times[i];
        }
        if (cnt >= n) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return answer;
}