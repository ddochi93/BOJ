#include <iostream>
#include <_ctype.h>
using namespace std;
int main(void)
{
    string s;
    int b;
    cin >> s >> b;
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(isalpha(s[i]))
        {
            ans = ans * b + (s[i]-'A'+10);
        }
        else
        {
            ans = ans * b + (s[i] -'0');
        }
    }
    cout << ans << endl;
    return 0;
}