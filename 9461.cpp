#include <iostream>
using namespace std;
long long dp[101];
int main(void)
{
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= 100; i++)
        dp[i] = dp[i - 2] + dp[i - 3];
    int t; cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        cout<< dp[n]<<endl;
    }
    return 0;
}