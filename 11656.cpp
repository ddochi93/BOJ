#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string arr[1001];
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0 ; i < len ; i++) {
        arr[i] = str.substr(i,len);
    }
    sort(arr,arr+len);
    // for(int i = 0 ; i < len ; i++) {
    //     for(int j = 0 ;  j < len - i - 1 ; j++) 
    //     {
    //         if(arr[j] > arr[j+1]) 
    //         {
    //             string tmp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = tmp;
    //         }
    //     }
    // }
    for(int i = 0 ; i < len ; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}