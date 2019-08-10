#include <iostream>
using namespace std;

int dp[100001][3];
int arr[100001][2];

void printArr(int n)
{
    for(int i = 1 ; i<= n; i++) 
    {
        for(int j = 0 ;  j< 3 ; j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
}

int maximum(int x, int y, int z)
{
    if (x>y)
        if (x>z)
            return x;
        else
            return z;
    else
        if (y>z)
            return y;
        else
            return z;
}
int main(void)
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        for(int i = 1 ; i <= n; i++)
        {
            for(int j = 0  ; j < 2 ; j++) 
            {
                cin >> arr[i][j];
            }
        }

        dp[1][0] = 0;
        dp[1][1] = arr[1][1];
        dp[1][2] = arr[1][0];

        for(int i = 2; i <= n ; i++) 
        {
            dp[i][0] = maximum(dp[n-1][0],dp[n-1][1],dp[n-1][2]);
            dp[i][1] =max(dp[n-1][0],dp[n-1][2]) + arr[n][1];
            dp[i][2] = max(dp[n-1][0],dp[n-1][1]) + arr[n][0];
        }


        printArr(n);

        //cout << maximum(dp[n][0],dp[n][1],dp[n][2]);
    }
    return 0;
}