package boj;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class P1260 {
    static int [][] arr;
    static boolean [] visited;
    static int n, m, v;
    public static void printArr() {
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j <  n ; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void initVisited() {
        visited = new boolean[n];
    }

    public static void dfs(int node) {
        visited[node] = true;
        System.out.print(node + 1 + " ");
        for(int i = 0 ; i < n ; i++) {
            if(arr[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                dfs(i);
            }
        }
    }

    public static void bfs(int start) {
        Queue<Integer> q = new LinkedList<>();
        visited[start] = true;
        q.offer(start);
        while(!q.isEmpty()) {
            int temp = q.poll();
            System.out.print(temp + 1 + " ");
            for(int i = 0 ; i < n ; i++) {
                if(arr[temp][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.offer(i);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        m = scanner.nextInt();
        v = scanner.nextInt();
        arr = new int[n][n];
        visited = new boolean[n];
        for(int i = 0 ; i < m ; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            arr[a-1][b-1] = arr[b-1][a-1] = 1;
        }
        //printArr();
        dfs(v - 1);
        System.out.println();
        initVisited();
        bfs(v - 1);
    }
}
