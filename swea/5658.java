import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
 
public class Solution {
    static int n;
    static int k;
    static ArrayList<Integer> list;
 
    public static String rotate(final String str, int phase) {
        char[] chArr = str.toCharArray();
        String res = "";
        Deque<Character> deque = new LinkedList<>();
        for (int i = 0; i < str.length(); i++) {
            deque.offer(chArr[i]);
        }
 
        if (!deque.isEmpty()) {
            for (int i = 0; i < phase; i++) {
                Character ch = deque.pollLast();
                deque.offerFirst(ch);
            }
        }
        while (!deque.isEmpty()) {
            res = res + deque.poll();
        }
        return res;
    }
 
    public static int getKth(int k) {
        return list.get(k - 1);
    }
 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        for (int i = 1; i <= tc; i++) {
            String nk = br.readLine();
            StringTokenizer st = new StringTokenizer(nk);
            n = Integer.parseInt(st.nextToken());
            k = Integer.parseInt(st.nextToken());
            String str = br.readLine();
            list = new ArrayList<>();
            int len = n / 4;
            for (int j = 0; j < len; j++) {
                String s = rotate(str, j);
                for (int k = 0; k <= 3; k++) {
                    String temp = s.substring(len * k, len + len * k); //?
                    list.add(Integer.parseInt(temp, 16));
                }
            }
            list.sort(Collections.reverseOrder());
            int temp = -1;
            for (int idx = 0; idx < list.size(); idx++) {
                if (temp != list.get(idx)) {
                    temp = list.get(idx);
                } else {
                    list.remove(i);
                }
            }
            int ans = getKth(k);
            System.out.println("#" + i + " " + ans);
        }
    }
}
 
