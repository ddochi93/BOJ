import java.util.Scanner;

public class P2606 {
    static int[][] map;
    static boolean[] visited;
    static int cnt = 0;

    public static void dfs(int computer, int node) {
        visited[node] = true;
        cnt++;
        for(int i = 1; i <= computer ; i++) {
            if(!visited[i] && map[node][i] == 1) {
                dfs(computer, i);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int computer = sc.nextInt();
        int edge = sc.nextInt();
        map = new int[computer + 1][computer + 1];
        visited = new boolean[computer + 1];

        for(int i = 1 ; i <= edge ; i++) {
            int from, to;
            from = sc.nextInt();
            to = sc.nextInt();
            map[from][to] = map[to][from] = 1;
        }

        dfs(computer, 1);
        System.out.println(cnt -1);
    }
}

