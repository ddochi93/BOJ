#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a, b;
    int gcd = 0;
    int gap = 0;
    int lcm = 0;
    cin >> a >> b;
    if (a >= b)
        gap = a - b;
    else
        gap = b - a;
    if (gap == 0)
    {
        gcd = a;
        lcm = a;
        cout << gcd << '\n'
             << lcm << '\n';
        return 0;  //이거 없어서 틀림
    }
    int to = min(gap, min(a, b));
    for (int i = 1; i <= to; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcm = a * b / gcd;
    cout << gcd << '\n'
         << lcm << '\n';
    return 0;
}