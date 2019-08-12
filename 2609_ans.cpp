#include <iostream>
using namespace std;

// int gcd(int a, int b)
// {
//     if(b==0)
//         return a;
//     else
//     {
//         return gcd(b,a%b);
//     }

// }

int gcd(int a, int b)
{
    while( b != 0)
    {
        int r = a % b; 
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
    int a , b;
    int g =1 ;
    int l = 1;
    cin >> a >> b;
    g = gcd(a,b);
    cout << g << '\n' << a*b/g << '\n';
    
    return 0;
}