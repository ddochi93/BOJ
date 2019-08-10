#include <iostream>
#include <cmath>
using namespace std;

int a[100001];

int main(void)
{
    int n;
    cin >> n;
    for(int i = 1; i<=n ; i++) 
    {
        a[i] = sqrt(i);
        //cout << a[i] << endl;
    }
    int cnt = 0 ;
    while(n != 0) 
    {
        cout << "a[n] : " << a[n] << endl;
        n = n - (a[n])*(a[n]);
        cout << sqrt(100000) << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}