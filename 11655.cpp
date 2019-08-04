#include <iostream>
#include <string>
using namespace std;

string rot13(string str)
{
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        //'n'부터는 -13
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] < 'N')
                str[i] += 13;
            else
                str[i] -= 13;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
             if (str[i] < 'n')
                str[i] += 13;
            else
                str[i] -= 13;
        }
    }
    return str;
}

int main(void)
{
    string s;
    getline(cin, s);
    cout << rot13(s) << endl;
    // for (int i = 0; i < 26; i++)
    //     printf("%d  ", rot13(s).at(i));
}