import java.util.Scanner;

public class Main {
    static String [] croatia = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        for(String alphabet : croatia) {
            if(str.contains(alphabet)) {
                str = str.replace(alphabet, "$");
            }
        }
        System.out.println(str.length());
    }
}

