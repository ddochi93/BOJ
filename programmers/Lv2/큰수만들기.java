import java.util.*;

class Solution {
    private String max = "";
    
    public String solution(String str, int k) {
        StringBuilder ans = new StringBuilder();
        int [] number = new int[str.length()];
        for(int i = 0 ; i < str.length() ; i++) {
            number[i] = (str.charAt(i) - '0');
        }
        int len = number.length;
        int count = len - k;
        int idx = 0;
        while(count > 0) {
            int max = number[idx];
            for(int i = idx ; i <= len - count ; i++) {
                if(number[i] > max) {
                    max = number[i];
                    idx = i;
                }
            }
            idx++;
            count--;
            ans.append(max) ;
        }
        return new String(ans);
    }
}
