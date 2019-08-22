#include <cstdio>
#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int res =1;
    scanf("%d",&n);
    for(int i = n ; i>=2 ; i--) 
    {
        res *= i;
    }
    printf("%d\n",res);
}