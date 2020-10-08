#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int limit = d.size();
    sort(d.begin(), d.end());
    int i = 0;
    int cnt = 0;
    for( i = 0;  i < limit ; i++) {
        if(budget - d[i] >= 0) {
            cnt++;
            budget -= d[i];
        } else {
            break;
        }
    }
    return cnt;
}
