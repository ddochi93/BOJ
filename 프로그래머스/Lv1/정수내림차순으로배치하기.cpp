#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> ans;
    while(true) {
        int num = n % 10;
        ans.push_back(num);
        n /= 10;
        if( n == 0) 
            break;
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    int len = ans.size();
    for(int i = 0 ; i < ans.size() ; i++) {
        answer += ans[i] * pow(10, len -1);
        len--;
        printf("%d ",ans[i]);
    }
    return answer;
}