#include <iostream>
#include <cmath>
using namespace std;

int main(void) 
{
    string s;
    int b;
    int res = 0;
    int jali = 0;
    cin >> s >> b;
    for(int i = s.size() -1 ; i >=0 ; i--,jali++)
    {
        if(s[i] >= 'A')
        {
            res += (s[i]-'A'+10) * pow(b,jali);
        }
        else
        {
            res += (s[i] - '0') * pow(b,jali);
        }
    }
    cout << res << '\n';
    return 0; 
}