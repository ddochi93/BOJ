#include <iostream>
using namespace std;

int dp[101];

int main(void)
{
    int n;
    cin >> n;
    dp[1] = 9;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = (2 * dp[i - 1] - (i - 1))% 1000000000;
        //cout << dp[i] << endl;
    }
    //printf("\n\n");
    cout << dp[n] << endl;
    return 0;
}