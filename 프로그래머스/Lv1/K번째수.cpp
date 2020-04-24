#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int len = commands.size();
    for(int i = 0 ; i < len ; i++) {
        vector<int> temp;
        temp.assign(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1 ]);
    }
    return answer;
}
