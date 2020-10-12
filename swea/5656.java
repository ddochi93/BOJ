import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
 
class Pair {
    int row;
    int col;
    Pair(int row, int col) {
        this.row = row;
        this.col = col;
    }
}
 
public class Solution {
    static int n, w, h;
    static int min = 987654321;
    static int [] dx = {0, 0 , 1, -1};
    static int [] dy = {1, -1, 0, 0};
 
    public static boolean inRange(int row, int col) {
        return row >= 0 && row < h && col >= 0 && col < w;
    }
 
    public static int [][] copy(int [][] arr) {
        int [][] copiedArr = new int[h][w];
        for(int i = 0 ; i < h ; i++) {
            for(int j = 0 ; j < w ; j++) {
                copiedArr[i][j] = arr[i][j];
            }
        }
        return copiedArr;
    }
 
    public static int[][] boom(final int [][] map, int row, int col) {
        int [][] copiedMap = copy(map);
        Queue<Pair> q = new LinkedList<>();
        q.offer(new Pair(row, col));
        while(!q.isEmpty()) {
            Pair temp = q.poll();
            int value = copiedMap[temp.row][temp.col];
            copiedMap[temp.row][temp.col] = 0;
            for(int i = 0 ; i < 4 ; i++) {
                for(int j = 1 ; j <= value - 1 ; j++) {
                    int newRow = temp.row + dy[i] * j;
                    int newCol = temp.col + dx[i] * j;
                    if(inRange(newRow, newCol)) {
                        q.offer(new Pair(newRow, newCol));
                    }
                }
            }
 
        }
        return copiedMap;
    }
 
    public static int[][] goDown(int [][] map) {
        int [][] copiedMap = copy(map);
        for(int i = 0 ; i < w ; i++) {
            for(int j = h - 1 ; j >= 1 ; j--) {
                if(copiedMap[j][i] == 0) {
                    for(int k = j - 1 ; k >= 0 ; k--) {
                        if(copiedMap[k][i] != 0) {
                            copiedMap[j][i] = copiedMap[k][i];
                            copiedMap[k][i] = 0;
                            break; //필수
                        }
                    }
                }
            }
        }
        return copiedMap;
    }
 
    public static int countBricks(int [][] map) {
        int cnt = 0;
        for(int [] arr : map) {
            for(int brick : arr) {
                if(brick != 0) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
 
    public static void solve(int [][] map, int phase) {
        if(phase == n || countBricks(map) == 0) {
            int brickCnt = countBricks(map);
            if(brickCnt < min) {
                min = brickCnt;
            }
            return;
        }
        int [][] copiedMap = copy(map);
        for(int i = 0 ; i < w ; i++) {
            for(int j = 0 ; j < h ; j++) {
                if(copiedMap[j][i] != 0) {
                    copiedMap = boom(copiedMap, j, i);
                    copiedMap = goDown(copiedMap);
                    solve(copiedMap, phase + 1);
                    copiedMap = copy(map);
                    break; //필수
                }
            }
        }
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        for(int i = 1 ; i <= tc ; i++) {
            n = sc.nextInt();
            w = sc.nextInt();
            h = sc.nextInt();
            min = 987654321;
            int [][] map = new int[h][w];
            for(int row = 0 ; row < h ; row++) {
                for(int col = 0 ; col < w ; col++) {
                    map[row][col] = sc.nextInt();
                }
            }
            solve(map, 0);
            System.out.println("#" + i + " " + min);
        }
    }
}

