#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participants;
    string ans = "";
    for(int i = 0 ; i < participant.size() ; i++) {
        participants[participant[i]] += 1;
    }
    for(int i = 0 ; i < completion.size() ; i++) {
        participants[completion[i]] -= 1;
    }
    // for(pair<stirng,int> s : participants) {
    //     if(s.second > 0) 
    //         ans += s.first;
    // } 
    for(int i = 0 ; i < participants.size() ; i++) {
        if(participants[participant[i]] > 0) {
            return participant[i];
        }
    }
}
