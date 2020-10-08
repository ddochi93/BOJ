#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;
vector<int> a;


int max_val(int a, int b, int c) {
    int max = a;
    if( max < b)  {
        max = b;
    }
    if( max < c) {
        max = c;
    }
    return max;
}

int main(void) {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    dp.push_back(a[0]);
    if(a.size() >= 2)
         dp.push_back(a[0] + a[1]);
    if(a.size() >= 3)
        dp.push_back(max_val(dp[1], dp[0] + a[2], a[1]+a[2]));

    for(int i = 3 ; i < a.size()  ; i++) {
        int val = max_val(dp[i-1], dp[i-2] + a[i], dp[i-3] + a[i-1] + a[i]);
        dp.push_back(val);
    }
    cout << dp[n-1];
    return 0;
}