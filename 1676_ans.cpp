//n! 0의 개수 = n/5 + n/25 + n/125 + n/625 + -----;
#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",n/125+n/25+n/5);
}