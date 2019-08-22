//2의 배수가 5의 배수보다 훨씬 많으므로 5의 k승이 몇개인지만 알면 된다.
#include <cstdio>
int main(void)
{
    int n;
    scanf("%d",&n); 
    int res =0;
    for(int i = 5; i<=n ; i++) 
    {
        int num = i;
        while(num%5 == 0) 
        {
            res++;
            num /= 5;
        }
    }
    printf("%d\n",res);
    
}