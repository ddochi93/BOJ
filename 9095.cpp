#include <iostream>
using namespace std;

int dp[11];

int main(void)
{

    int t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    while (t--)
    {
        int n;
        cin >> n;
        if (dp[n] == 0) //이미 n보다 큰 수의 subset수를 구해놨으면 계산 x
        {
            for (int i = 4; i <= n; i++)
            {
                dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}