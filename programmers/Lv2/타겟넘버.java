class Solution {
    int cnt = 0;
    public void DFS(int [] numbers, int target, int index, int sum) {
        if (index == numbers.length) {
            if (target == sum) {
                cnt++;
            }
            return;
        }
        DFS(numbers, target, index + 1, sum - numbers[index]);
        DFS(numbers, target, index + 1, sum + numbers[index]);
    }
    
    public int solution(int[] numbers, int target) {
        DFS(numbers, target, 0, 0);
        return cnt;
    }
}

