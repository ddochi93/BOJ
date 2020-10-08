#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int flag = 10;
    do { 
        int num = n % flag;
        n /= 10;
        answer.push_back(num);
    }while(n != 0);
    return answer;
}