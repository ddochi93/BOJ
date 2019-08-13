#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string s;
    string ans = "";
    cin >> s;
    for(int i = s.size() -1 ; i>=0 ; i-=3)
    {
        if(i>=2)
            ans += 4*s[i-2] + 2*s[i-1] + s[i] - 6*'0';
        else if( i>=1)
            ans += 2*s[i-1] + s[i] -  2*'0';
        else
            ans += s[i];
    }
    reverse(ans.begin(),ans.end());
    cout << ans << '\n';
}