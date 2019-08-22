#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000001];

int main(void) 
{
    int n;
    cin >> n;
    for(int i =0 ; i < n ; i++) 
        cin >> arr[i];
    sort(arr,arr+n);
    int cnt =1;
    int maxCnt = 1;
    long long maxNum = arr[0];
    for(int i = 1 ; i< n ; i++) 
    {
        if(arr[i] == arr[i-1])
            cnt++;
        else
            cnt =1;
        if(cnt > maxCnt)
        {
            maxCnt = cnt;
            maxNum = arr[i];
        }

    }
    cout << maxNum << '\n';
}