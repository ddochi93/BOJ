import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        for(int i = 1 ; i <= 10 ; i++) {
            int dump = Integer.parseInt(br.readLine());
            int [] height = new int[100];
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);
            for(int j = 0 ; j < 100 ; j++) {
                height[j] = Integer.parseInt(st.nextToken());
            }
            int maxIdx = 0;
            int minIdx = 0;
            for(int j = 0 ; j < dump ; j++) {
                maxIdx = 0;
                minIdx = 0;
                for(int k = 1 ; k < 100 ; k++) {
                    if(height[k] > height[maxIdx]) {
                        maxIdx = k;
                    }
                    if(height[k] < height[minIdx] ) {
                        minIdx = k;
                    }
                }
                height[maxIdx]--;
                height[minIdx]++;
            }

            maxIdx = 0;
            minIdx = 0;
            for(int j = 1 ; j < 100 ; j++) {
                if(height[j] > height[maxIdx]) {
                    maxIdx = j;
                }
                if(height[j] < height[minIdx]) {
                    minIdx = j;
                }
            }
            int cnt = height[maxIdx] - height[minIdx];
            System.out.println("#" + i + " " + cnt);

        }
    }
}

