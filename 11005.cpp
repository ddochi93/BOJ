#include <iostream>
#include <vector>
using namespace std;

char arr[36];
int main(void)
{
    vector<char> v;
    char num = '0';
    char alphabet = 'A';
    for(int i = 0 ; i < 36 ;i++)
    {
        if( i<=9)
        {
            arr[i] = num++;
        }
        else
        {
            arr[i] = alphabet++;
        }
    }

    int n,b;
    cin >> n >> b;
    while(! (n<b))
    {
        v.push_back(arr[n%b]);
        n /= b;
    }
    cout << arr[n];
    for(int i = v.size() -1 ; i >= 0 ; i--)
    {
        cout << v.at(i);
    }
    return 0;
}