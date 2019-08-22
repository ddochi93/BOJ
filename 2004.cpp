#include <iostream>
using namespace std;
int factTwo(int);
int factFive(int);
int factTwo(int n) {
    int res = 0;
    for(long long i =2 ; i<=n ; i*=2) 
        res += n/i;
    return res;
}

int factFive(int n) {
    int res= 0 ;
    for(long long i = 5; i<= n ; i*=5)  //int로해서 re?
        res += n/i;
    return res;
}

int main(void) {
    int two = 0 , five = 0;
    int n,m;
    cin >> n >> m;
    two = factTwo(n) - factTwo(m) - factTwo(n-m);
    five = factFive(n) - factFive(m) - factFive(n-m);
    cout << ((two < five) ? two : five) << '\n';
    return 0;
}