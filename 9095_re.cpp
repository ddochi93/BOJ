#include <iostream>
using namespace std;
int dp[12];
int main(void)
{
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        for(int i = 3; i<=n ; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n] << endl;
    }
    return 0;
}