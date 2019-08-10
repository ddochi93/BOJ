#include <iostream>
using namespace std;

int a[301];
int dp[301];

int main(void)
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int ans = a[0];
    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    dp[2] = max(a[1],a[0]) + a[2];
    for(int i = 3 ; i< n; i++) 
    {
        dp[i] = max(dp[i-3] + a[i-1] , dp[i-2]) + a[i];
       // ans = max(ans,dp[i]);
       //cout << dp[i] << endl;
    }
    cout << dp[n-1] << endl;
    return 0;
}