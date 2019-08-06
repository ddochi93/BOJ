#include <iostream>
using namespace std;

int max_memo[1001];
int p[1001];

int main(void)
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> p[i];
    }

    max_memo[0] = 0;
    max_memo[1] = p[1];
    for (int i = 2; i <= t; i++)
    {
        max_memo[i] = p[i];
        for (int j = 1; j <= i / 2 ; j++)
        {
            if (max_memo[i] < max_memo[i - j] + max_memo[j])
            {
                max_memo[i] = max_memo[i - j] + max_memo[j];
            }
        }
    }

    // for(int i = 1 ; i <= t ; i++)
    // {
    //     cout << max_memo[i] << endl;
    // }
    cout << max_memo[t] << endl;

    return 0;
}