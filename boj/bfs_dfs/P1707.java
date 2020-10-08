import java.util.ArrayList;
import java.util.Scanner;

public class P1707 {
    static ArrayList<Integer>[] arr;
    static int[] color;

    static void dfs(int node, int c) {
        color[node] = c;
        for(Integer t : arr[node]) {
            if(color[t] == 0) {
                dfs(t, 3 - c);
            }
        }
    }

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();

        while( --t >= 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            boolean res = true;
            arr = (ArrayList<Integer>[]) new ArrayList[n + 1];
            color = new int[n + 1];
            for(int i = 1 ; i <= n; i++) {
                arr[i] = new ArrayList<>();
            }
            for(int i = 0 ; i < m ; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                arr[u].add(v); arr[v].add(u);
            }

            for(int i = 1;  i <= n ; i++) {
                if(color[i] == 0) {
                    dfs(i, 1);
                }
            }

            for(int i = 1; i<= n; i++) {
                for(Integer j : arr[i]) {
                    if(color[i] == color[j]) {
                        res = false;
                        break;
                    }
                }
            }

            if(res) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }
}
