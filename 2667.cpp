#include <cstdio>
#include <utility>
#include <queue>
#include <algorithm>
#define MAX 30
using namespace std;

pair<int, int> dCoor[4] = {make_pair(-1, 0), make_pair(1, 0), make_pair(0, 1), make_pair(0, -1)};
int map[MAX][MAX];
int checked[MAX][MAX];
int cnt = 0;
int resArr[MAX*MAX];  //이거때매 틀림...

bool inRange(pair<int,int>);
void bfs(int x, int y);

bool inRange(pair<int,int> next) 
{
        if( next.first >= 0 && next.first <= MAX-1 && next.second >= 0 && next.second <= MAX-1)
            return true;
        else
            return false;

}

void bfs(int x, int y) 
{
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    checked[x][y] = cnt;
    while(!q.empty())
    {
        pair<int,int> coor = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++) 
        {
            pair<int,int> next = make_pair(coor.first + dCoor[i].first , coor.second + dCoor[i].second); //여기 수정c
            if(inRange(next) && map[next.first][next.second] == 1 && checked[next.first][next.second] == 0) 
            {
                q.push(next);
                checked[next.first][next.second] = cnt;
            }
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0 ;j< n ; j++)
            scanf("%1d", &map[i][j]);
    }

    // for(int i = 0 ; i < n ; i++) 
    // {
    //     for(int j = 0 ; j < n ; j++) 
    //     {
    //         printf("%c ",map[i][j]);
    //     }
    //     printf("\n");
    // }
    
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < n ; j++) 
        {
            if(map[i][j] == 1 && checked[i][j] == 0) 
            {
                cnt++;
                bfs(i,j);
            }
        }
    }
    printf("%d\n",cnt);
    for(int i = 1 ; i <= cnt ; i++) 
    {
        int res = 0;
        for(int j = 0 ; j < n ; j++) 
        {
            for(int k = 0 ; k< n ; k++) 
            {
                if(checked[j][k] == i )
                    res++;
            }
        }
        resArr[i] = res;
    }
    sort(resArr+1,resArr+cnt+1);
    for(int i = 1 ; i <= cnt ; i++) 
        if(resArr[i] != 0)
            printf("%d\n",resArr[i]);
    // for(int i = 0 ; i < n ; i++) 
    // {
    //     for(int j = 0 ; j < n ; j++) 
    //     {
    //         printf("%d ",checked[i][j]);
    //     }
    //     printf("\n");
    // }
}