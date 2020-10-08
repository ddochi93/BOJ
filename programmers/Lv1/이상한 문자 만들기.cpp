#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int flag =0;
    int len = s.size();
    for(int i = 0 ; i < len ; i++, flag++) {
        if(s[i] == ' ') {
            flag = -1;
            answer += ' ';
            continue;
        }
        if(s[i] >= 'A' && s[i] <= 'Z') 
        {
            if(flag%2 ==0)
            {
                answer += s[i];
            } 
            else 
            {
                answer += s[i] + 32; 
            }
        } 
        else
        {
            if(flag%2 ==0)
            {
                answer += s[i] - 32;
            } 
            else 
            {
            answer += s[i];
            }
        }
    }
    return answer;
}