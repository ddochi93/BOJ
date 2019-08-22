#include <cstdio>
#include <vector>
using namespace std;

//int arr[10000];
int c[236197];
int ans = 0;

int pow(int a, int b) 
{
    int ans =1;
    for(int i = 1 ;i <= b; i++) 
        ans *= a;
  //  ans = a;
    return ans;
}

int next(int a,int p) 
{
    int ans = 0;
    //  return pow(a/100,p) + pow(a/10,p) + pow(a%10
    while(a > 0)
    {
        ans += pow(a % 10 ,p);
        a /= 10;
    }
    return ans;
}

int length(int a, int p , int nth) 
{
    int num = next(a,p);
    printf("%d\n",num);
    if(c[a] == 0 ) 
    {
        c[a] = nth;
        return length(num,p,nth+1);
    }
    else
    {
        return c[a] - 1; 
    }
    
}
int main(void)
{
    int a,p;
    scanf("%d %d",&a,&p);
    ans = length(a,p,1);
    printf("%d\n",ans);
    return 0;
}