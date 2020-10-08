class Solution {
    private boolean [] checked = new boolean[10000000];
    private int ans = 0;
    
    public void permutation(StringBuilder arr, int depth, int n, int r) {
        
    if (depth == r) {
        String res = new String(arr);
        res = res.substring(0, r);
        
        int number = Integer.parseInt(res);
        
        if(checked[number] == false && isPrime(number)) {
            System.out.println(res);
            checked[number] = true;
            ans++;
        }
        return;
    }
 
    for (int i=depth; i<n; i++) {
        swap(arr, depth, i);
        permutation(arr, depth + 1, n, r);
        swap(arr, depth, i);
    }
}
 
 public void swap(StringBuilder str, int depth, int i) {
    char temp = str.charAt(depth);
    str.setCharAt(depth, str.charAt(i));
    str.setCharAt(i, temp);
}
    
    public boolean isPrime(int num) {
        if(num <= 1) {
            return false;
        }
        for(int i = 2 ; i <= Math.sqrt(num) ; i++ ) {
            if(num % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    public int solution(String numbers) {
        int len = numbers.length();
        for(int i = 1 ; i <= len ; i++) {
            permutation(new StringBuilder(numbers), 0 , len, i);
        }
        int answer = ans;
        return answer;
    }
}
