#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;


vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i =0 ;  i < progresses.size() ; i++) {
        int rem = 100 - progresses[i];
        int date = 0;
        if( rem %speeds[i] == 0 ) {
            date = rem / speeds[i];
        } else {
            date = rem / speeds[i] + 1;
        }
        q.push(date);
    }

    while(!q.empty()) {
        int n = q.front();
        int cnt = 0;
        while(!q.empty() && q.front() <= n) {  //q.empty() check 안하면 세번째원소(9)에서 터짐.
            q.pop();
            cnt++;
        }
        answer.push_back(cnt);
    }
    return answer;
}

int main(void) {
    vector<int> progresses = {93, 30, 55};
    vector<int> speeds = {1,30,5};
    vector<int> ans = solution(progresses, speeds);
    for(int i = 0;  i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}