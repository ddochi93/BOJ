#include <iostream>
using namespace std;
long long memo[1001];
long long go(long long n) 
{
    if( n <= 2 )
    {
        memo[n] = n;
        return n;
    }
    if(memo[n] > 0 ) return memo[n];
    memo[n] = go(n-1)  + go(n-2);
    return memo[n] % 10007;
}
int main(void)
{
    int num;
    cin >> num;
    go(num);

    // for(int i = 0 ; i < 1001 ; i++ )
    // {
    //     printf("%lld ",memo[i]);
    // }
    cout << go(num) % 10007 << endl;

    return 0;
}