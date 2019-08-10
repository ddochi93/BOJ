#include <iostream>
using namespace std;

int arr[1001];
int len = 0;

int main(void)
{
    int max = 0;
    int n;
    cin >> n;
    for(int i = 1; i<= n; i++) 
    {
        cin >> arr[i];
    }
    for(int i = 1; i<=n; i++) 
    {
        if(arr[i] > max)
        {
            max = arr[i];
           // printf("%d에서 증가 len : %d\n",i,len);
            len++;
        }
    }
    cout << len << endl;
    return 0;
}