#include <iostream>
using namespace std;

long long a[101];

int gcd(int a, int b)
{
    return (b==0) ? (a) : (gcd(b,a%b));
}

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long gsum = 0;
        cin >> n;
        for(int i = 1; i<= n ; i++) 
        {
            cin >> a[i];
        }
        for(int i = 1; i<= n-1 ; i++)
        {
            for(int j = i+1 ;j <= n ; j++)
            {
                gsum += gcd(a[i],a[j]);
            }
        }
        cout << gsum << '\n';
    }
    return 0;
}