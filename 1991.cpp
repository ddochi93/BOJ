#include <cstdio>
using namespace std;

int a[26][2];

void preorder(int x) {
    if( x == -1) 
        return;
    printf("%c",x+65);
    preorder(a[x][0]);
    preorder(a[x][1]);
}
void inorder(int x) {
    if(x == -1)
        return;
    inorder(a[x][0]);
    printf("%c",x+65);
    inorder(a[x][1]);
}
void postorder(int x) {
    if(x == -1)
        return;
    postorder(a[x][0]);
    postorder(a[x][1]);
    printf("%c",x+65);
}
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++) {
        char x,y,z;
        scanf(" %c %c %c",&x,&y,&z); //flush 필요?
        //printf("%d %d %d\n\n",x,y,z);
        if(y == '.')
            a[x-65][0] = -1;
        else
            a[x-65][0] = y-65;
        if(z == '.')
            a[x-65][1] = -1;
        else
            a[x-65][1] = z-65;
    }
    preorder(0);
    printf("\n");
    inorder(0);
    printf("\n");
    postorder(0);
    printf("\n");
    return 0;
}