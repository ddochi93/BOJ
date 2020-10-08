import java.util.HashMap;
import java.util.Objects;

class Coord {
    Integer fromX;
    Integer fromY;
    Integer toX;
    Integer toY;

    public Coord(Integer fromX, Integer fromY, Integer toX, Integer toY) {
        this.fromX = fromX;
        this.fromY = fromY;
        this.toX = toX;
        this.toY = toY;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Coord coord = (Coord) o;
        return Objects.equals(fromX, coord.fromX) &&
                Objects.equals(fromY, coord.fromY) &&
                Objects.equals(toX, coord.toX) &&
                Objects.equals(toY, coord.toY);
    }

    @Override
    public int hashCode() {
        return Objects.hash(fromX, fromY, toX, toY);
    }
}

class Solution {
    public boolean inRange(int dx, int dy) {
        if(dx >= -5 && dx <= 5 && dy >= -5 && dy <= 5)
            return true;
        return false;
    }

    public int solution(String dirs) {
        int answer = 0;
        HashMap<Coord, Boolean> map = new HashMap<>();
        int dx = 0;
        int dy = 0;

        for(int i = 0 ; i < dirs.length() ; i++) {
            switch(dirs.charAt(i)) {
                case 'U':
                    if(inRange(dx, dy +1)) {
                        Coord coord1 = new Coord(dx, dy, dx, dy + 1);
                        Coord coord2 = new Coord(dx, dy + 1, dx, dy);
                        if(!map.containsKey(coord1) && !map.containsKey(coord2))
                            answer++;
                        map.put(coord1, true);
                        map.put(coord2, true);
                        dy++;
                    }
                    break;
                case 'D':
                    if(inRange(dx,dy - 1)) {
                        Coord coord3 = new Coord(dx, dy, dx, dy -1);
                        Coord coord4 = new Coord(dx, dy-1, dx, dy);
                        if(!map.containsKey(coord3) && !map.containsKey(coord4))
                            answer++;
                        map.put(coord3, true);
                        map.put(coord4, true);
                        dy--;
                    }
                    break;
                case 'L':
                    if(inRange(dx -1, dy) ) {
                        Coord coord5 = new Coord(dx -1,  dy, dx, dy);
                        Coord coord6 = new Coord(dx, dy, dx - 1, dy);
                        if(!map.containsKey(coord5) && !map.containsKey(coord6))
                            answer++;
                        map.put(coord5, true);
                        map.put(coord6, true);
                        dx--;
                    }
                    break;
                case 'R':
                    if(inRange(dx + 1, dy)) {
                        Coord coord7 = new Coord(dx, dy, dx + 1, dy);
                        Coord coord8 = new Coord(dx + 1, dy, dx, dy);
                        if(!map.containsKey(coord7) && !map.containsKey(coord8))
                            answer++;
                        map.put(coord7, true);
                        map.put(coord8, true);
                        dx++;  //이거 안해서 틀
                    }
                    break;
            }
        }
        return answer;

    }
}



public class 방문길이3 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        //int ans1 = solution.solution("ULURRDLLURRR");
        //int ans2 = solution.solution("LULLLLLLU");
        int ans3 = solution.solution("LULLLLLLUUUURRRRRRRRRRDDDDDLLLLLLLU");
        System.out.println(ans3);
        //System.out.println(ans2);
    }
}

