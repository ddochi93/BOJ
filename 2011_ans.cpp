#include <iostream>
using namespace std;
int a[5001];
int dp[5001];

int main(void)
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 1; i <= len; i++)
    {
        a[i] = s.at(i - 1) - '0';
    }
    dp[0] = 1; //풀이봄
    for(int i = 1; i<= len ;i++) 
    {
        if(a[i] >= 1 && a[i] <= 9)
        {
            dp[i] = dp[i-1] % 1000000;
        }
        if(i==1)
            continue;
        if(a[i-1] == 0) 
            continue;
        int num = a[i-1] * 10 + a[i];
        if(num >= 10 && num <= 26) 
        {
            dp[i] += dp[i-2];
            dp[i] %= 1000000;
        }
    }
    cout << dp[len] %1000000 << endl;
}