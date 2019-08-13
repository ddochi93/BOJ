#include <iostream>
#include <cstdio>
#define MAX 1000001
using namespace std;

bool c[MAX] = {true,true,};

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 2; i*i <= MAX ;i++)
    {
        if(c[i] == false)
        {
            for(int j = i+i ; j <= MAX ; j+=i)
            {
                c[j] = true;
            }
        }
    }

    while(true)
    {
        bool flag = false;  
        int n; 
       // scanf("%d",&n);
        cin >> n;
        if(n==0)    break;
        for(int i = 3; i <= n ; i+=2)
        {
            if(c[i] == false && c[n-i] == false)
            {
                flag = true;
                //printf("%d = %d + %d\n",n,i,n-i);
                cout << n << " = " << i << " + " << n-i << '\n';
                break;
            }
        }
        //if(flag == false)  printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}