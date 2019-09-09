#include <cstdio>
#include <queue>
#define MAX 100
#define INF 999999
using namespace std;

int a[MAX][MAX];
int d[MAX][MAX];
bool checked[MAX][MAX];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool inRange(int nx, int ny)
{
    if (nx >= 0 && nx < MAX && ny >= 0 && ny < MAX) //여기도 MAX가아니라 n으로 했어야햇다.
        return true;
    return false;
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    checked[x][y] = true;
    while (!q.empty())
    {
        int cnt = 0;
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (inRange(nx, ny))
            {
                if (d[nx][ny] == -1)
                {
                    d[nx][ny] = d[x][y] + 1;
                    cnt++;
                }
                if (d[nx][ny] == cnt && checked[nx][ny] == false)
                {
                    q.push(make_pair(nx, ny));
                    checked[nx][ny] = true;
                }
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
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            d[i][j] = a[i][j] - 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && checked[i][j] == false)
            {
                bfs(i, j);
            }
        }
    }

    printf("\n\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", d[i][j]);
        printf("\n");
    }

    return 0;
}