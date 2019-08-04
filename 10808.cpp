
#include <iostream>
#include <cstring>
using namespace std;

int alphabet[26];

int main(int argc, const char * argv[]) {
    char str[101];
    scanf("%s",str);
    int len = (int)strlen(str);
    for(int i = 0 ; i  < len ; i++) {
        str[i] -= 'a';
    }
    for(int i = 0 ; i < len ; i++) {
        alphabet[str[i]] += 1;
    }
    
    for(int i = 0 ; i < 26; i++) {
        printf("%d ",alphabet[i]);
    }
    return 0;
}

