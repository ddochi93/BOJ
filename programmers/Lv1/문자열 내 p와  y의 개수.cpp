#include <string>
#include <iostream>
using namespace std;

int p_cnt;
int y_cnt;

bool solution(string s)
{
    bool answer = true;
    int len = s.size();
    for(int i = 0 ; i < len ; i++) {
        if(s[i] == 'p' || s[i] == 'P')
            p_cnt++;
        else if(s[i] == 'y' || s[i] == 'Y')
            y_cnt++;
    }
    if(p_cnt != y_cnt)
        answer = false;
    return answer;
}