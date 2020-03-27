#include <string>
#include <vector>

using namespace std;

string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };


string solution(int a, int b) {
    string answer = "";
    int total_day = 0;   
    
    //month
    for(int i = 0 ; i < a - 1; i++)
        total_day += month[i];
    //day
    total_day += b;
    
    //2015 12 31일은 목요일
   // int date = (4 + (total_day % 7)) % 7;
     int date = (4 + total_day ) % 7;
    answer += day[date];
    return answer;
}