#include <iostream>
#include <cstdio>
using namespace std;

bool c[1000001] = {true,true} ; //초기화 필요?

int main(void)
{
    int m;
    int n;
    cin >> m >> n;
    for(int i =2 ; i*i<= n; i++)
    {
        if(!c[i])
        {
            for(int j = 2*i ; j<= n ; j+=i)   //int j = i*i 하면 10^12가 될 수 도 있어서 runtime error난다.
            {
                c[j] = true;
            }
        }
    }
    for(int i = m ; i<= n ; i++)
    {
        if(c[i] == false)
            printf("%d\n",i);
    }
    return 0;

}