import java.util.*;

class Main {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int len = str.length();
        int idx = 0;
        String [] arr = new String[len];
        
        for(int i = 0 ; i < len ; i++) {
            String sub = str.substring(i);
            arr[idx++] = sub;
        }
        Arrays.sort(arr);
        for(String s : arr) {
            System.out.println(s);
        }
    }
}

