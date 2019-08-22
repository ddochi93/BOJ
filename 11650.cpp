#include <algorithm>
#include <tuple>
#include <vector>
#include <iostream>
using namespace std;
int main(void) {
    // int n;
    // cin >> n;
    // vector<tuple<int,int>> v;
    // for(int i = 0 ; i< n; i++) {
    //     int a,b;
    //     cin >> a>> b;
    //     v.push_back(make_tuple(a,b));
    // }
    // sort(v.begin(),v.end());
    // for(auto t : v) 
    //     cout << get<0>(t) << ' ' << get<1>(t) << '\n';
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0 ; i< n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    for(auto t : v) 
        cout << t.first << ' ' << t.second << '\n';
}