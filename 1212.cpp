#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    string ans ="";
    for(int i = 0 ; i < s.size() ;i++)
    {
        string tmp ="";
        int num = s[i] - '0';
        if( i == 0 && num ==0)
            tmp += '0';
        while(num!= 0)
        {
            tmp += (num % 2) + '0';
            num /= 2;
        }
        if(i==0)
            ;
        else if(tmp.size() == 2)
            tmp += '0';
        else if(tmp.size() == 1)
            tmp += "00";
        else if(tmp.size() == 0)
            tmp += "000";
        reverse(tmp.begin(),tmp.end());
        ans += tmp;
    }
    cout << ans << '\n';
    return 0;
}