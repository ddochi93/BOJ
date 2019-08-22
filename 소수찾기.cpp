#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    if(numbers.find('4') == string::npos) {
        printf("없음");
    }
    return answer;
}

int main(void)
{
    string s; 
    cin >> s;
    solution(s);
    //cout << solution(s) << '\n';

    return 0;
}