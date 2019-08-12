    #include <iostream>
    #include<cstdio>
    using namespace std;

    int gcd(int a, int b)
    {
        // while(b != 0)
        // {
        //     int r = a % b;
        //     a = b;
        //     b = r;
        // }
        // return a;
    
        return b == 0 ? a : gcd(b,a%b);
    }

    int main(void)
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            int g = gcd(a,b);
            printf("%d\n",a*b/g);
        }
        return 0;
    }