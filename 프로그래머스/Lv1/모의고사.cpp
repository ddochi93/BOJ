#include <string>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int max = 0;
    int cnt[3] = {0,0,0};
    for(int i = 0 ;  i < answers.size(); i++) {
        int ans1 = (i%5) + 1;
        int ans2 = 0;
        if(i%2 == 0){
            ans2 = 2;
        } else{
            switch(i%8) {
                case 1: ans2 =1; break;
                case 3: ans2 = 3; break;
                case 5 : ans2 = 4; break;
                case 7: ans2 = 5; break;
            }
        }
        int ans3 = 0;
        switch(i/2 % 5) {
            case 0 : ans3 = 3;  break;
            case 1 : ans3 = 1; break;
            case 2 : ans3 = 2; break;
            case 3: ans3 = 4; break;
            case 4: ans3 = 5; break;
        }
        if(ans1 == answers[i]){
            cnt[0]++;
        }
        if(ans2 == answers[i]){
            cnt[1]++;
        }
        if(ans3 == answers[i]){
            cnt[2]++;
        }
    }
    for(int i = 0;  i < 3 ; i++) {
        if(max < cnt[i])
            max = cnt[i];
    }
    for(int i = 0; i  < 3 ; i++) {
        if(cnt[i] == max)
            answer.push_back(i+1);
    }

    return answer;
}

int main(void) {
    vector<int> answers;
    int n;
    while(true) {
        scanf("%d", &n);
        if(n ==0 )
            break;
        answers.push_back(n);
    }
    vector<int> answer = solution(answers);
    for(int i = 0 ; i < answer.size() ; i++) {
        printf("%d ",answer[i]);
    }
    return 0;
}