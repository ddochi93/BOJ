#include <iostream>
using namespace std;

long long dp[101][10];

void print(int n)
{
    for(int i =0 ; i <= n ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            printf("%lld ",dp[i][j]);
        }
        printf("\n");
    }
}


int main(void)
{
    int n ;
    long long ans = 0;
    cin >> n;
    for(int i =1 ; i<= 9 ; i++) 
    {
        dp[1][i] = 1;
    }
    // for(int i = 2; i<= n ; i++) 
    // {
    //     dp[i][0] = 1;
    //     dp[i][9] = 1;
    // }
    for(int i = 2;  i<= n ; i++) 
    {
        dp[i][0] = dp[i-1][1];
        dp[i][9] = dp[i-1][8];
        for(int j =1 ; j<= 8 ; j++)
        {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000;
        }
    }
    //print(n);
    for(int i = 0 ; i < 10 ;i++)
    {
        ans += dp[n][i];
    }
    cout << ans % 1000000000 << endl;
    return 0;
}