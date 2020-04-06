#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool isNumber(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}


bool comp(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

bool first_to_come(vector<int> v, int element)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
    {
        if (v[i] == element)
        {
            return false;
        }
    }
    return true;
}

vector<int> solution(string s)
{
    vector<int> answer;
    vector<string> sv;
    string number;
    int len = s.size();
    for (int i = 1; i < len - 1; i++) 
    {
        if (s[i - 1] == '}' && s[i] == ',')
        {
            continue;
        }
        if (s[i] == '}')
        {
            sv.push_back(number);
            number = "";
        }
        else if (s[i] == '{')
        {
            continue;
        }
        else
        {
            number += s[i];
        }
    }
    sort(sv.begin(), sv.end(), comp);
    number = "";
    answer = {0};
    for (int i = 0; i < sv.size(); i++)
    {
        for (int j = 0; j < sv[i].size(); j++)
        {
            if (sv[i][j] == ',')
            {

                int element = atoi(number.c_str());
                if (first_to_come(answer, element))
                {
                    answer.push_back(element);
                }
                number = "";
            }
            else
            {
                if (isNumber(sv[i][j]))
                {
                    number += sv[i][j];
                }
            }
        }
        int element = atoi(number.c_str());
        if (first_to_come(answer, element))
        {
            answer.push_back(element);
        }
        number = "";
    }
    vector<int> r_answer;
    for(int i = 0 ; i < answer.size() ; i++) {
        if(answer[i] != 0 ) {
            r_answer.push_back(answer[i]);
        }
    }
    return r_answer;
}
