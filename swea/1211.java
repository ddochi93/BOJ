import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
public class Solution {
    static int [][] map;
    static int cnt = 0;
 
    public static boolean inRange(int row, int col) {
        return row >= 0 && row < 100 && col >= 0 && col < 100;
    }
 
    public static int goLeft(int row, int col) {
        for(int i = col ; i >= 0 ; i--) {
            cnt++;
            if(inRange(row + 1, i) && map[row+1][i] == 1) {
                return i;
            }
        }
        return 0;
    }
 
    public static int goRight(int row, int col) {
        for(int i = col ; i < 100 ; i++) {
            cnt++;
            if(inRange(row + 1, i) && map[row +1][i] == 1) {
                return i;
            }
        }
        return 0;
    }
 
    public static void goDown(int col) {
        for(int i = 1 ; i < 100 ; i++) {
            cnt++;
            int left = col - 1;
            int right = col + 1;
            if(inRange(i, left) && map[i][left] == 1) {
                col = goLeft(i, left);
            } else if(inRange(i, right) && map[i][right] == 1) {
                col = goRight(i, right);
            }
        }
    }
 
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = 10;
        for(int i = 1 ; i<= tc ; i++) {
            int t = Integer.parseInt(br.readLine());
            map = new int[100][100];
            int min = 987654321;
            cnt = 0;
            int x = 0;
            for(int row = 0 ; row < 100 ; row++) {
                String str = br.readLine();
                StringTokenizer st = new StringTokenizer(str);
                for(int col = 0 ; col < 100 ; col++) {
                    map[row][col] = Integer.parseInt(st.nextToken());
                }
            }
            for(int col = 0 ; col < 100 ; col++) {
                if(map[0][col] == 1) {
                    cnt = 0;
                    goDown(col);
                    if (min >= cnt) {
                        min = cnt;
                        x = col;
                    }
                }
 
            }
            System.out.println("#" + t + " " + x);
        }
    }
}

