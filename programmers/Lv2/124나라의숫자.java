class Solution {
    public String solution(int n) {
        String answer = "";
        int rem = 0;
        
        while( n  > 0) {
            rem = n % 3;
            n = n / 3;
            if( rem == 0) {
                n -= 1;
                rem = 4;
            }
            answer = rem + answer;
        }
        return answer;
    }
}
