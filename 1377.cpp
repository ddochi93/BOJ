#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(void)
{ 
    int n ; 
    int ans = 0;
    cin >> n;
    vector<pair<int,int>> v(n+1);
    for(int i = 1 ; i <= n ; i++) 
    {
        scanf("%d",&v[i].first);
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(int i = 1;  i<= n;i++) 
    {
        if(ans < v[i].second - i)
        {
            ans = v[i].second - i;
        }
    }
    printf("%d\n",ans+1);
}