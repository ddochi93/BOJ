#include <cstdio>
#include <queue>
#include <algorithm>
#define MAX 25
using namespace std;

int map[25][25];
int checked[25][25];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n;
int ans[25 * 25];
//처음 제출했던 답에서 checked배열 어떻게 처리했나 확인

bool inRange(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < n)
        return true;
    return false;
}
void bfs(int x, int y, int cnt)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    checked[x][y] = cnt;

    while (!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();
        checked[cur_x][cur_y] = cnt;
        for (int i = 0; i < 4; i++)
        {
            int new_x = cur_x + dx[i];
            int new_y = cur_y + dy[i];
            if (inRange(new_x, new_y) && checked[new_x][new_y] == 0 && map[new_x][new_y] == 1)
            {
                q.push(make_pair(new_x, new_y));
                //checked[new_x][new_y] = cnt;
            }
        }
    }
}

int main(void)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1 && checked[i][j] == 0)
            {
                bfs(i, j, ++cnt);
            }
        }
    }

    printf("%d\n", cnt);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[checked[i][j]] += 1;
        }
    }
    sort(ans + 1, ans + cnt + 1);
    for (int i = 1; i <= cnt; i++)
        printf("%d\n", ans[i]);
    return 0;
}