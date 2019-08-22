#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) 
{
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    sort(&a[0],&a[n]);
    for(int i = 0 ; i < n ; i++) {
        cout <<a[i] << '\n';
    }
    return 0;
}