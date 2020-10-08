import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Coord {
    int z;
    int y;
    int x;
    Coord(int z, int y, int x) {
        this.z = z;
        this.y = y;
        this.x = x;
    }
}

public class P7569 {
    static int dz[] = {0, 0, 0, 0, -1, 1};
    static int dy[] = {-1, 1, 0, 0, 0, 0};
    static int dx[] = {0, 0, -1, 1, 0, 0};
    static int map[][][];
    static int h,n,m;
    static Queue<Coord> q = new LinkedList<>();

    public static void printMap() {
        for(int i =1 ; i <= h; i++) {
            for(int j = 1 ; j <= n ; j++) {
                for(int k = 1; k <=m ; k++) {
                    System.out.print( map[i][j][k] + " ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }

    public static boolean inRange(int newZ, int newY, int newX) {
        if(newZ >= 1 && newZ <= h && newY >=1 && newY <= n && newX >= 1 && newX <= m) {
            return true;
        }
        return false;
    }

    public static void startBFS() {
        while(!q.isEmpty()) {
            Coord temp = q.poll();
            int z = temp.z;
            int y = temp.y;
            int x = temp.x;

            for(int i = 0 ; i < 6; i++) {
                int newZ = z + dz[i];
                int newY = y + dy[i];
                int newX = x + dx[i];
                if(inRange(newZ, newY, newX) && map[newZ][newY][newX] == 0) {
                    q.offer(new Coord(newZ, newY, newX));
                    map[newZ][newY][newX] = map[z][y][x] + 1;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        m = scanner.nextInt();
        n = scanner.nextInt();
        h = scanner.nextInt();
        int max = -1;
        boolean isAllIk = true;

        map = new int[h+1][n+1][m+1];

        for(int i =1 ; i <= h; i++) {
            for(int j = 1 ; j <= n ; j++) {
                for(int k = 1; k <=m ; k++) {
                    map[i][j][k] = scanner.nextInt();
                }
            }
        }

        //printMap();

        for(int i =1 ; i <= h; i++) {
            for(int j = 1 ; j <= n ; j++) {
                for(int k = 1; k <=m ; k++) {
                    if(map[i][j][k] == 1) {
                        q.offer(new Coord(i, j, k));
                    }
                }
            }
        }

        startBFS();
        //printMap();

        for(int i =1 ; i <= h; i++) {
            for(int j = 1 ; j <= n ; j++) {
                for(int k = 1; k <=m ; k++) {
                    if(map[i][j][k] == 0)  {
                        isAllIk = false;
                        break;
                    }
                    max = Math.max(max, map[i][j][k]);
                }
            }
        }

        System.out.println(isAllIk ? (max - 1) : (-1));

    }
}

