#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int arr[1001];

int main(void)
{
    int n ;
    int ans = 0;
    cin >> n;
    for(int i = 1; i<=n ; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
        for(int j=1; j < i; j++)
        {
            if(arr[j] > arr[i])
            {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans << endl;
    return 0;
}