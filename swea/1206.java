import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
 
class Solution {
    static int [][] map;
    static int t;
    static int cnt;
    static int [] dx = {-2, -1, 1, 2};
 
    public static void init() {
        map = new int[256][t];
        t = 0;
        cnt = 0;
    }
 
    public static boolean checkView(int row, int col) {
        for(int i = 0 ; i < 4 ; i++) {
            if(map[row][col + dx[i]] == 1) {
                return false;
            }
        }
        return true;
    }
 
    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 
        for (int test_case = 1; test_case <= 10; test_case++) {
            t = Integer.parseInt(br.readLine());
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);
            map = new int[256][t];
            for(int j = 0 ; j < t ; j++) {
                int height = 255 - Integer.parseInt(st.nextToken());
                for(int k = 255 ; k > height ; k--) {
                    map[k][j] = 1;
                }
            }
            for(int i = 0 ; i < 256 ; i++) {
                for(int j = 0 ; j < t; j++) {
                    if(map[i][j] == 1) {
                        boolean res = checkView(i,j);
                        if(res) {
                            cnt++;
                        }
                    }
                }
            }
            System.out.println("#" + test_case + " " + cnt);
            init();
        }
    }
}

