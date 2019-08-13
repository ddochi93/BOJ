#include <iostream>
#include <cstdio>
using namespace std;
bool isPrime(int num)
{
    if(num < 2)
        return false;
    for(int i = 2; i* i<= num ; i++)
        if(num% i == 0)
            return false;
    return true;
}
int main(void)
{
    int m, n;
    cin >> m >> n;
    for(int i = m ; i <= n; i++)
        if(isPrime(i))
            printf("%d\n",i);
}