#include <iostream>
using namespace std;
long long dp[201][201];
int main(void)
{
    for(int i = 1 ; i<= 200 ; i++)
    {
        dp[i][1] = 1;
        dp[1][i] = i;
    }
    int n;
    int k; 
    scanf("%d %d",&n,&k);
    for(int i = 2; i<= n ; i++) 
    {
        for(int j = 2; j<= k ;j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000000;   
        }
    }
    cout << dp[n][k] << endl;
    
    // for(int i = 0 ; i <= n ; i++)
    // {
    //     for(int j = 0 ; j<= k ; j++) 
    //     {
    //         printf("%lld ",dp[i][j]);
    //     }
    //     cout << endl;
    // }
    
}