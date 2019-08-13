#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string ans = "";
    int dec = 0;
    int a,b;
    cin >> a >> b;
    int m;
    cin >> m;
    for(int i = 0 ; i < m ; i++) 
    {
        int n;
        cin >> n;
        if( i > 0)
            dec *= a;
        dec += n;
    }
    //cout << dec << endl;
    //10진법 변환 완료..
    if(dec == 0)
    {
        cout << '0' <<endl;
        return 0;
    }                       //필요?

    while(dec != 0)
    {
        ans += (dec % b);   //여기때매 틀림.. 2자리수의 경우 char형(dec % b + '0')으로 불가
        dec /= b;
    }
    reverse(ans.begin(),ans.end());
    // for(int i = ans.size() -1 ; i>=0 ; i--)
    //     cout << ans[i] << ' ' ;
    for(int ch : ans)
    {
        cout << ch << ' ';
    }
    cout << '\n';
    return 0;
}   