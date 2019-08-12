#include <iostream>
#include <algorithm>
using namespace std;

int dp[2][100001];
int arr[2][100001];
int ans[100001];

int main(void) 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        // int ans;
        cin >> n ;
        for(int i = 0 ; i < 2 ; i++) 
        {
            for(int j = 1 ; j <= n ; j++) 
            {
                cin >> arr[i][j];
            }
        }

        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];

        for(int i = 2;  i <= n ; i++)
        {
            dp[0][i] = max(dp[1][i-1]  , dp[1][i-2]) + arr[0][i];
            dp[1][i] = max(dp[0][i-1]  , dp[0][i-2]) + arr[1][i];
            ans[i] = max(dp[0][i],dp[1][i]);
        }

       // ans = max(dp[0][n],dp[1][n]);
        cout << ans[n] << endl;
        // for(int i  =0 ;  i < 2; i++) 
        // {
        //     for(int j = 0 ; j<= n ; j++) 
        //     {
        //         cout << arr[i][j];
        //     }
        //     cout << endl;
        // }
    }
    return 0;
}