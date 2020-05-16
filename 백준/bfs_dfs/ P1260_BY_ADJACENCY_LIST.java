import java.util.*;

public class P1260_BY_ADJACENCY_LIST {
    static int n, m, v;
    static ArrayList<ArrayList<Integer>> arr;
    static boolean [] checked;

//    static void printList() {
//        for(int i = 0; i  <= n ; i++) {
//            for(Integer num : arr.get(i)) {
//                System.out.print(num + " " );
//            }
//            System.out.println();
//        }
//    }
    public static void dfs(int node) {
        System.out.print(node + " ");
        checked[node] = true;
        for(Integer num : arr.get(node)) {
            if(!checked[num])
                dfs(num);
        }
    }

    public static void bfs(int node) {
        Queue<Integer> q = new LinkedList<>();
        q.add(node);
        checked[node] = true;
        while(!q.isEmpty()) {
            int temp = q.remove();
            System.out.print(temp +  " ");
            for(Integer num : arr.get(temp)) {
                if(!checked[num]) {
                    checked[num] = true;
                    q.add(num);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        m = scanner.nextInt();
        v = scanner.nextInt();
        arr = new ArrayList<>(n);
        for(int i = 0 ; i <= n ; i++) {
            ArrayList<Integer> n = new ArrayList<>();
            arr.add(n);
        }
        checked = new boolean[n + 1];

        for(int i = 0 ; i < m ; i++) {
            int u, v;
            u = scanner.nextInt();
            v = scanner.nextInt();
            arr.get(u).add(v); arr.get(v).add(u);
        }
        for(ArrayList<Integer> l : arr) {
            Collections.sort(l);
        }
        dfs(v);
        System.out.println();
        checked = new boolean[n + 1];
        bfs(v);

    }
}