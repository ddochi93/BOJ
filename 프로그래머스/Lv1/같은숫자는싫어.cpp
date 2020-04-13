#include <vector>
#include <iostream>

using namespace std;
int flag[10];

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int len = arr.size();
    for(int i = 0 ; i < len ; i++) {
        if( arr[i-1] != arr[i] ) {
            flag[arr[i]] = 0;
        }
        flag[arr[i]]++;
        if(flag[arr[i]] == 1 ) {
            answer.push_back(arr[i]);
        }
        if( i == 0 )
            continue;

    }
    

    
    return answer;
}