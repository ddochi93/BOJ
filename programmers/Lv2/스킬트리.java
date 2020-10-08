class Solution {
    int [] charIdx;
    
    public void initCharIdx() {
        for(int i = 0 ;  i < charIdx.length ; i++) {
            charIdx[i] = 27;
        }
    }
    
    public boolean isValidCharIdx() {
        for(int i = 1 ; i < charIdx.length ; i++) {
            //>= ·ÎÇÏ¸é ¾ÈµÊ
            if( charIdx[i] > charIdx[i-1] )
                return false;
        }
        return true;
    }
    
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        boolean possible = true;
        charIdx = new int[skill.length()];
        initCharIdx();
        StringBuilder stb = new StringBuilder(skill);
        StringBuilder reversed = stb.reverse();
        

        for(String s : skill_trees) {
            for(int i = 0 ; i < s.length() ; i++) {
                for(int j = 0 ; j < reversed.length() ; j++) {
                     if(reversed.charAt(j) == s.charAt(i)) {
                         charIdx[j] = i;
                     }
                }
            }
            
            for(int k = 0 ; k < charIdx.length ; k++) {
                System.out.println(charIdx[k]);
            }
            possible = isValidCharIdx();
            if(possible) {
                answer++;
            }
            initCharIdx();
        }
            

        
        return answer;
    }
}
