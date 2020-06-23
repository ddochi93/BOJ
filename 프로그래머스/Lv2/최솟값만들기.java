import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Solution
{
    public int solution(int []A, int []B)
    {
        int sum = 0;
        Arrays.sort(A);
        ArrayList<Integer> bList = new ArrayList();
        for(int i = 0 ; i < B.length ; i++) {
            bList.add(B[i]);
        }
        Object [] B_tmp = bList.toArray();
        Arrays.sort(B_tmp, Collections.reverseOrder());
        for(int i = 0 ; i < A.length ; i++) {
            sum += A[i] * (int)B_tmp[i];
        }
        return sum;
    }
}



public class 최솟값만들기 {
    public static void main(String[] args) {
        Solution s = new Solution();
        int ans = s.solution(new int[] {1,2}, new int []{3,4});
        System.out.println( ans);
    }
}

