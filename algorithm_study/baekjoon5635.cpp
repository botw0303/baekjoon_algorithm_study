#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int birth;
};

bool compare(Student stu1, Student stu2) {
	return stu1.birth < stu2.birth;
}

vector<Student> stuVec;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name = "";
		int year, month, day;
		int birth = 0;
		cin >> name >> day >> month >> year;
		birth += year * 10000;
		birth += month * 10;
		birth += day;
		Student stu;
		stu.name = name;
		stu.birth = birth;
		stuVec.push_back(stu);
	}
	sort(stuVec.begin(), stuVec.end(), compare);
	cout << stuVec[stuVec.size() - 1].name << endl;
	cout << stuVec[0].name;
}