class Solution {
    int solution(int[][] land) {
        int [][] dp;
        dp = new int[land.length][4];
        for(int i = 0 ; i < 4; i++) {
            //dp 배열 첫 행 초기화
            dp[0][i] = land[0][i];
        }

        for(int i = 1 ; i < dp.length ; i++) {
            for(int j = 0 ; j < 4 ; j++) {
                dp[i][j] = maxInRow(dp[i-1], j) + land[i][j];
            }
        }
        return maxInRow(dp[dp.length - 1], 5);
    }


    int maxInRow(int [] dpRow, int excludedColumn) {
        int max = 0;
        for(int i = 0 ; i < 4 ; i++) {
            if(i == excludedColumn)
                continue;
            if(max < dpRow[i]) {
                max = dpRow[i];
            }
        }
        return max;
    }


}

public class 땅따먹기 {
    public static void main(String[] args) {
        Solution s = new Solution();
        //int ans = s.solution(new int [][] {{1,2,3,5}, {5,6,7,8}, {4,3,2,1}});
        //int ans2 = s.solution(new int [][] {{2,3,1,7}, {3,4,7,8}, {9,6,4,2}});
        int ans3 = s.solution(new int [][] {{1,9,43,3},{72,34,1,11}});
        System.out.println(ans3);
    }
}

