import java.util.HashMap;

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = {};
        int idx = 0;
        HashMap<String, Boolean> map = new HashMap<>();
        StringBuilder temp = new StringBuilder();

        for(int i = 0 ; i < words.length ; i++) {
            String word = words[i];
            if(i == 0) {
                temp.append(word + "_");
                map.put(word, true);
                idx = i;
                continue;
            } else if(word.charAt(0) != temp.charAt(temp.length() - 2) || map.containsKey(word) ){
                idx = i;
                break;
            }
            map.put(word, true);
            temp.append(word + "_");
        }
        if(idx == 0 ) {
            answer = new int[]{0 , 0};
        } else {
            int a = (idx + 1) % n;
            if( a == 0) {
                a = n;
            }
            int b = idx / n + 1;
            answer = new int[] {a,b};
        }
        return answer;
    }
}

public class 영어끝말잇기2 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        solution.solution(3, new String[] {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"});
        solution.solution(2, new String[] {"hello", "one", "even", "never", "now", "world", "draw"});

    }
}



