#include <iostream>
using namespace std;

int memo[1000001];

// int calCount(int n)
// {
//     if (n <= 2)
//     {
//         return n - 1; //T1=0 , T2= 1
//     }
//     else
//     {
//     }
// }

int main(void)
{
    int n;
    cin >> n;

    memo[1] = 0;
    memo[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int cnt = 1000000;
        if(i % 3 == 0) 
        {
            if( cnt > 1+ memo[i/3])
            {
                cnt = 1 + memo[i/3];
            }
        }
        if(i % 2 == 0) 
        {
         if( cnt > 1+ memo[i/2])
            {
                cnt = 1 + memo[i/2];
            }
        }
        if( 1 + memo[i-1]  < cnt)  //여기서는 다 걸림.
        {
            cnt = 1 + memo[i-1];
        }
        memo[i] = cnt;
    }

    // for(int i = 0 ; i < 50 ; i++) {
    //     printf("%d\n", memo[i]);
    // }

    cout << memo[n] << '\n';

    return 0;
}