#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string s = "";
    int n;
    cin >> n;
    if( n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }
    while( n != 0)
    {
        if(n < 0)
        {
            s += (-n % 2) +'0';
            if(-n%2 !=0)    //이거 안해서 틀림
                n = (n/-2) + 1;
            else
                n /= -2;
        }
        else
        {
            s += (n % (-2)) + '0';
            n /= (-2);
        }
    }
    reverse(s.begin() , s.end());
    cout << s << '\n';
    return 0;
}