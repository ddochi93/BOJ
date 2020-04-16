/*첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다.
 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 
 입력으로 주어지는 간선은 양방향이다. */
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int m;
int v;

vector<vector<int>> ve(1001);
vector<bool> visited(1001);
queue<int> q;


void dfs(int start) {
    printf("%d ", start);
    visited[start] = true;
    for(int i = 1; i<= n; i++) {
        if(visited[i] == false && ve[start][i] == 1) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int num = q.front(); 
        q.pop();
        printf("%d ", num);
        for(int i = 1 ; i <= n ; i++) {
            if(visited[i] == false && ve[num][i] == 1) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}


void init() {
    for(int i = 0 ; i <= n ; i++) {
        visited[i] = false;
        // for(int j = 0 ; j <=n ; j++) {
        //     ve[i][j] = 0;
        // }
    }
}


int main(void) {
    cin >> n >> m >> v;
    //assign
    ve.assign(n+1, vector<int> (n+1,0));
    visited.assign(n+1,0);
    for(int i = 0 ; i < m ; i++) {
        int from, to;
        cin >> from >> to;
        ve[from][to] = ve[to][from] = 1;
    }

    dfs(v);
    cout << '\n';
    init();
    bfs(v);
    return 0;
}
