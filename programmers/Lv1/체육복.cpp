#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v(n, 1);   //ÀÌ°Å
    for(int i =0 ; i  < lost.size() ; i++) {
        v[lost[i] - 1] = 0;
    }
    for(int i = 0 ; i < reserve.size() ; i++) {
        v[reserve[i] -1 ] += 1;
    }
    for(int i = 0  ; i < v.size() ; i++) {
        if(v[i] == 0) {
            int prev; 
            int next;
            if( i >0 ) {
                prev = i -1;
            } else {
                prev = 0;
            }
            if( i < v.size() - 1) {
                next = i + 1;
            } else {
                next = i;
            }
            if( v[prev] == 2) {
                v[i] = 1;
                v[prev] = 1;
            }
            else  if(v[next] == 2)   {      //else if??
                v[i] = 1;
                v[next] = 1;
            }
        }
        
        if( v[i] > 0)
            answer++;
    }
    return answer;
}
