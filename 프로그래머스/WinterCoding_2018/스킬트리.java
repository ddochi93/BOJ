class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        int max;
        int size = skill_trees.length;
        for(int i = 0 ; i < size ; i++) {
            String temp = skill_trees[i];
            boolean flag = false;
            max = -1;
            for(int j = 0 ; j < skill.length(); j++) {
                char ch = skill.charAt(j);
                int idx = temp.indexOf(ch);
                if(idx == -1)
                    idx = 27;
                if( max <= idx) {
                    max = idx;
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                answer++;
            }
        }
        return answer;
    }
}


public class 스킬트리 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int ans = solution.solution("CFE", new String[] {"BACDE", "CBADF", "AECB", "BDA"});
       //int ans = solution.solution("ABF", new String[] {"ABEF", "ABE", "HABE", "BDA"});
        System.out.println(ans);
    }
}

