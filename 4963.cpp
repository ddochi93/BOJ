#include <cstdio>
#include <queue>
#define MAX 50
using namespace std;

int map[MAX][MAX];
bool checked[MAX][MAX];
int dx[8] = {0, 0, 1, -1, -1, 1, -1, 1};
int dy[8] = {-1, 1, 0, 0, -1, -1, 1, 1};

void init()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            map[i][j] = 0;
            checked[i][j] = false;
        }
    }
}
bool inRange(int x, int y)
{
    if (x >= 0 && x < 50 && y >= 0 && y < 50)
        return true;
    return false;
}

void bfs(int x, int y) //좌표계 x,y로 놔둬 되나?
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    checked[x][y] = true;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (inRange(nx, ny))
            {
                if (map[nx][ny] == 1 && checked[nx][ny] == false)
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
    int w, h;
    while (scanf("%d %d", &w, &h) != EOF)
    {
        if(w==0 && h==0)
            break;
        init();
        int cnt = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                scanf("%d", &map[i][j]);
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (map[i][j] == 1 && checked[i][j] == false)
                {
                    cnt++;
                    bfs(i, j);
                }
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}