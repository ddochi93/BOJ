#include <iostream>
using namespace std;

int arr[10001];
int dp[10001];

int main(void)
{
    int n;
    cin >> n;
    for(int i = 1; i<= n ; i++) 
    {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for(int i = 3; i <= n ; i++) 
    {
        dp[i] = dp[i-1] ;  //0ㄱㅐ연속인 경우
        if(dp[i] < dp[i-2] + arr[i]) 
        {
            dp[i] = dp[i-2] + arr[i]; //1개 연속인 경우
        }
        if(dp[i] < dp[i-3] + arr[i-1]+ arr[i])
        {
            dp[i] = dp[i-3] + arr[i-1] + arr[i];
        }
    }

    // for(int i = 0; i <= n; i++) 
    // {
    //     cout << dp[i] << endl;
    // }
    cout << dp[n] << endl;
    return 0;
}