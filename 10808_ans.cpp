
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int alphabet[26];

int main(int argc, const char * argv[]) {
    string str;
    cin >> str;
    
    for(int i = 'a' ; i <='z' ; i++) {
        cout << count(str.begin(),str.end(),i) << "  " ;
    }
    printf("\n");
    return 0;
}

