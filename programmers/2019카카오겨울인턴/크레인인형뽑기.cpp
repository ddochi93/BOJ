#include <vector>
#include <stack>
using namespace std;
stack<int> s;
int solution(vector<vector<int>> board, vector<int> moves){
    int answer = 0;
    int len = moves.size();
    int row_size = board[0].size();
    for (int i = 0; i < len; i++)
    {
        int nth = moves[i] - 1;
        for (int j = 0; j < row_size; j++)
        {
            int doll = board[j][nth];
            if (doll == 0)
            {
                continue;
            }
            else
            {
                //printf("%d\n",doll);
                board[j][nth] = 0;
                if (!s.empty())
                {
                    if (s.top() != doll)
                    {
                        s.push(doll);
                    }
                    else
                    {
                        s.pop();
                        answer += 2;
                    }
                }
                else 
                {
                    s.push(doll);
                }
                break; 
            }
        }
    }
    return answer;
}