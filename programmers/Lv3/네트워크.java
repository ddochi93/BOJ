class Solution {
    int cnt = 0;
    int row = 0 ; 
    int col = 0;
    boolean [] visited;
    int [][] map;

    public void dfs(int node) {
        for(int c = 0 ; c < col ; c++) {
            if(!visited[c] && map[node][c] == 1) {
                visited[c] = true;
                dfs(c);
            } 
        }
    }

    public int solution(int n, int[][] computers) {
        map = computers;
        row = computers.length;
        col = computers[0].length;
        visited = new boolean[row];

        for(int i = 0 ; i < row ; i++) {
            if(!visited[i]) {
                visited[i] = true;
                dfs(i);
                cnt++;
            }
        }
        return cnt;
    }
}

