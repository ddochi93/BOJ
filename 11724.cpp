#include <iostream>
#include <vector>
using namespace std;

bool checked[1001];
vector<int> a[1001];
int cnt = 0;

void dfs(int n)
{
    checked[n] = true;
    for (int i = 0; i < a[n].size(); i++)
    {
        if (checked[a[n][i]] == false)
        {
            dfs(a[n][i]);
        }
    }
}

void start_dfs(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (checked[i] == false)
        {
            dfs(i);
            cnt++;
        }
    }
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    while (m--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    //start_dfs(n);
    //cout << cnt << '\n';
    for (int i = 1; i <= n; i++)
    {
        if (checked[i] == false)
        {
            dfs(i);
            cnt++;
        }
    }
    printf("%d\n", cnt);
}