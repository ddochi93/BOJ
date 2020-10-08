#include <string>
#include <vector>

using namespace std;

bool isDuplicate(long long num, vector<long long> v) {
    int len = v.size();
    bool flag = false;
    for(int i =0 ; i < len ; i++) {
        if(v[i] == num)
            return true;
    }
    return flag;
}

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;
    int len = room_number.size();
    for(int i = 0 ; i < len ; i++) {
        long long next_room = room_number[i];
        if(!isDuplicate(next_room, answer) ) {
            answer.push_back(next_room);
        }
        else {
            for(int j = 0 ; j <=answer.size() ; j++) {
                if(isDuplicate(next_room, answer)) {
                    next_room++;
                }
                else {
                    answer.push_back(next_room);
                    break;
                }
            }
            // while(isDuplicate(next_room, answer)) {
            //     next_room++;
            // }
            // answer.push_back(next_room);
        }
    }
    return answer;
}
