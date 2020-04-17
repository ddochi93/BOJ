#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    int idx = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    string answer = "김서방은 " + to_string(idx) + "에 있다";
    return answer;
}
