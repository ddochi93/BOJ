#include <iostream>
using namespace std;

int dp[31];

int main(void)
{
    int n;
    cin >> n;
    dp[0] = 1;
    dp[2] = 3;

    for(int i = 4; i <= n; i += 2) 
    {
        for(int j = 0 ; j <= i -4 ;j+=2)
        {
            dp[i] += 2 * dp[j];
        }
        dp[i] += 3*dp[i-2];
    }
    cout << dp[n] << endl;


    return 0;
}