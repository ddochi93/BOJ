//ans = 0; 으로 초기화하면 오답난다.

#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int dp[100001];

int main(void)
{
    int n;
    int ans =  -1001;
    cin >> n;

    arr[0] = -1001;
    dp[0] = -1001;
    for(int i =1 ; i<=n ; i++) 
    {
        cin >> arr[i];
        dp[i] = arr[i];
        dp[i] = max(dp[i], dp[i-1]  +arr[i]);
        //cout << dp[i] << endl;
        ans = max(ans,dp[i]);
    }
    cout << ans << endl;    
    //cout<< max(-1,-1) << endl;
    return 0;
}