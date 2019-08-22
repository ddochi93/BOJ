#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v(10001);
int main(void) 
{
    int n; 
    cin >> n;
    
    for(int i = 0 ; i<n; i++) 
    {
        int num;
        scanf("%d",&num);
        v[num] += 1;
    }
    for(int i = 1 ; i <= 10000 ; i++) 
    {
        if(v[i] >0) 
        {
            for(int j = 0 ; j < v[i] ; j++ )
                printf("%d\n",i);
        }
    }

}
