#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void) {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    string str1 = to_string(a);
    str1.append(to_string(b));
    string str2 = to_string(c);
    str2.append(to_string(d));
    cout << stoll(str1) + stoll(str2) << endl;
    return 0;
}