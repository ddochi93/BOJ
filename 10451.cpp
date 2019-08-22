#include <cstdio>
#include <vector>
using namespace std;
vector<int> v[1001];
bool checked[1001];
int cnt = 0;

void init()
{
    cnt = 0;
    for (int i = 1; i <= 1001; i++)
    {
        v[i].clear();
        checked[i] = false;
    }
}

void dfs(int node)
{
    checked[node] = true;
    for(int i = 0 ; i < v[node].size() ; i++) 
    {
        int next = v[node][i];
        if(checked[next] == false) 
        {
            dfs(next);
        }
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        init();
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            int num;
            scanf("%d", &num);
            v[i].push_back(num);
        }
        for (int i = 1; i <= n; i++)
        {
            if (checked[i] == false)
            {
                dfs(i);
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
