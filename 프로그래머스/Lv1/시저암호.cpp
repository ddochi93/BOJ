#include <string>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;



string solution(string s, int n) {
    string answer = "";
    for(int i = 0 ; i < s.size() ; i++) {
        int ch = s[i];
        (ch == ' ') ?  : (ch = s[i] + n); 
        if(isupper(s[i])) {
            if(ch > 'Z') {
                ch = 'A' + (ch % 'Z') - 1;
            }
        } else {
            if(ch > 'z') {
                ch = 'a' + (ch % 'z') -1;
            } 
        }
        answer += ch;
    }
    return answer;
}