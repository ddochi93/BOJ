
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int alphabet[26];

int main(int argc, const char * argv[]) {
    char str[101];
    scanf("%s",str);
    int len = strlen(str);
    
    for(int i = 0 ; i < 26 ; i++) {
        alphabet[i] = -1;
    }
    
    for(int i = 0 ; i < len ; i++) {
        str[i] -= 'a';
        if(alphabet[str[i]] == -1)
    
            alphabet[str[i]] = i;
    }
    for(int i = 0 ; i < 26;  i++) {
        printf("%d ",alphabet[i]);
    }
    
 //   printf("\n%d\n" , string::npos);
}

