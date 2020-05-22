class Solution {
    public boolean isPrime(int n) {
        boolean flag = true;
        for(int i = 2; i <= Math.sqrt(n) ; i++) {
            if(n % i == 0) {
                flag = false;
                break;
            }
        }
        return flag;
    }

    public int solution(int[] nums) {
        int answer = 0;
        int size = nums.length;
        for(int i = 0 ; i < size - 2  ; i++) {
            for(int j = i + 1; j < size - 1 ; j++) {
                for(int k = j + 1; k < size ; k++ ) {
                    //System.out.println(nums[i] + " , " + nums[j] + ", " + nums[k]);
                    if(isPrime(nums[i] + nums[j] + nums[k])) {
                        answer++;
                    }
                }
            }
        }
        return answer;
    }
}

public class 소수만들기 {
    public static void main(String[] args) {
        Solution s = new Solution();
        int ans = s.solution(new int[]{1,2,7,6,4});
        System.out.println(ans);
    }
}

