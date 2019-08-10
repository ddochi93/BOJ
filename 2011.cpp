#include <iostream>
using namespace std;
int a[5001];
long long dp[5001][2];

int main(void)
{
    a[0] = 1;
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 1; i <= len; i++)
    {
        a[i] = s.at(i - 1) - '0';
        // if (a[i] == 0 && a[i-1] == 0)
        // {
        //     printf("0\n");
        //     return 0;
        // }
    }
    // dp[1][0] = 1;
    // dp[1][1] = 0;

    for (int i = 1; i <= len; i++)
    {
        if (a[i] >= 1 && a[i] <= 9)
        {
            dp[1][0] = 1;
            dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % 1000000;
        }
        if (i == 1)
            continue;
        if (a[i - 1] == 0)
            continue;
        if (a[i - 1] * 10 + a[i] >= 10 && a[i - 1] * 10 + a[i] <= 26)
        {
            dp[i][1] = dp[i - 1][0];
        }
    }
    cout << (dp[len][0] + dp[len][1]) % 1000000 << endl;
    return 0;
}