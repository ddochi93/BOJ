#include <iostream>
#include <vector>
using namespace std;

vector<int> a[20001];
int color[20001];

void dfs(int node, int c)
{
    color[node] = c;
    for(int i = 0 ; i < a[node].size() ; i++) 
    {
        int next = a[node][i];
        if(color[next] == 0)
            dfs(next,3-c);   
    }
}

void init()
{
    for(int i = 0 ; i < 20001;i++)
    {
        a[i].clear();
        color[i] = 0;
    }
}

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        init();
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i =1 ; i<= m ; i++) 
        {
            int u,v;
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1; i<= n ; i++) 
        {
            if(color[i] == 0 )
            {
                dfs(i,1);
            }
        }
        bool ok = true;
        for(int i =1; i<= n ; i++) 
        {
            for(int j = 0 ; j < a[i].size() ; j++)
            {
                if(color[i] == color[a[i][j]])
                {
                    ok = false;
                    break;
                }
            }
            if(ok == false)
                break;
        }
        printf("%s\n",ok ? "YES" : "NO");
    }
    
}