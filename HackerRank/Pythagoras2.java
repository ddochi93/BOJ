import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;


class Solution {
    public boolean isInteger(double d) {
        return Math.floor(d) == d;
    }

    public boolean isDisjoint(int num1, int num2, int num3) {
        boolean flag = true;
        for(int i = 2 ; i < num3 ; i++) {
            if((num1 % i == 0) && (num2 % i == 0) && (num3 % i == 0)) {
                flag = false;
            }
        }
        return flag;
    }

    public int[] solution(int n) {
        int [] ans = new int[2];
        ArrayList<Integer> numList = new ArrayList<>();
        int cnt = 0;

        for(int i = 1 ; i <= n - 2; i++) {
            for(int j = i + 1; j <= n-1 ; j++) {
                double sum = Math.pow(i,2) + Math.pow(j,2);
                double third = Math.sqrt(sum);
                if(isInteger(third)) {
                    int k = (int)third;
                    if(isDisjoint(i,j,k)) {
                        cnt++;
                    }
                    numList.add(i);
                    numList.add(j);
                    numList.add(k);
                }
            }
        }
        HashSet<Integer> set = new HashSet<>(numList);
        ans[0] = cnt; //x,y,z 가 서로소인 경우의수 (A)
        ans[1] = n - set.size(); //피타고라스에 이용되지않은 1보다 크거나 같고 N보다 작거나 같은 자연수의 갯수 (B)
        return ans;
    }
}

public class Pythagoras2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Solution solution = new Solution();
        int input = sc.nextInt();
        int [] ans = solution.solution(input);
        for (int an : ans) {
            System.out.println(an);
        }
    }
}
