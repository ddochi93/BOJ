package boj;

import java.util.ArrayList;
import java.util.Scanner;

public class P11724 {
    static int n, m;
    static ArrayList<Integer>[] arr;
    static boolean [] visited;
    static int cnt;

    static void dfs(int start) {
        visited[start] = true;
        for(Integer num : arr[start]) {
            if(!visited[num]) {
                dfs(num);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        m = scanner.nextInt();
        arr = new ArrayList[n + 1]; //casting??
        visited = new boolean[n + 1];

        for(int i = 1; i <= n ; i++) {
            arr[i] = new ArrayList<>();
        }
        for(int i = 0 ; i < m ; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            arr[u].add(v); arr[v].add(u);
        }

        for(int i = 1 ; i <= n ; i++) {
            if(!visited[i]) {
                dfs(i);
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
