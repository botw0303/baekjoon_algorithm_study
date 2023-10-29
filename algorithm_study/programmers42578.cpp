#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    unordered_map<string, int> um;
    for (int i = 0; i < clothes.size(); i++) {
        if (um.find(clothes[i][1]) != um.end()) {
            um.find(clothes[i][1])->second++;
        }
        else {
            um.insert(make_pair(clothes[i][1], 1));
        }
    }

    for (auto elem : um) {
        answer *= elem.second + 1;
    }

    return answer - 1;
}

int main() {

}