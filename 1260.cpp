#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>
#define INF 99999999
using namespace std;

vector<int> gp[20001];
queue<int> q;
bool checked[1001];

void bfs(int n)
{
    q.push(n);
    checked[n] = 1;
    while(!q.empty())
    {
        int start = q.front(); q.pop();
        printf("%d ",start);
        for(int i = 0 ; i < gp[start].size() ; i++) 
        {
            if(checked[gp[start][i]] == false)
            {
                q.push(gp[start][i]);
                checked[gp[start][i]] = true;
            }
        }
    }

}

void dfs(int node)
{
    // checked[n] = true;
    // printf("%d ",n);
    // for(int i = 0 ; i < gp[n].size() ;i++) 
    // {
    //     // int min = INF;
    //     // if(gp[n][i] < min) 
    //     //min = gp[n][i];
    //     if(checked[gp[n][i]] == false) 
    //         dfs(gp[n][i]);
    // }
    stack<pair<int,int>> s;
    checked[node] = true;
    printf("%d ",node);
    s.push(make_pair(node,0));
    while(!s.empty()) 
    {
        int node = s.top().first;
        int start = s.top().second; 
        s.pop();
        for(int i = start ; i < gp[node].size() ; i++) 
        {
            if(checked[gp[node][i]] == false) 
            {
                printf("%d ",gp[node][i]);
                checked[gp[node][i]] = true;
                s.push(make_pair(node,i+1));
                s.push(make_pair(gp[node][i],0));
                break;
            }
        }
    }
}


int main(void) 
{
    int n,m,v;
    scanf("%d %d %d",&n,&m,&v);
    while(m--) 
    {
        int from,to;
        scanf("%d %d",&from,&to);
        gp[from].push_back(to);
        gp[to].push_back(from);
    }
    for(int i = 1 ; i<= n ; i++)     // i<=n 해야함
    {
        sort(gp[i].begin(),gp[i].end());
    }

    dfs(v);
    printf("\n");
    memset(checked,false,sizeof(checked));
    bfs(v);
}