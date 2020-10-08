class Descending implements Comparator<String> {

    public int compare(String a, String b)
    {
        //return b.compareTo(a);
        String aFirst = a + b;
        String bFirst = b + a;
        return bFirst.compareTo(aFirst);
    }
}

class Solution {
    public String solution(int[] numbers) {
        ArrayList<String> arr = new ArrayList<>();

        for(int i = 0 ; i < numbers.length ; i++) {
            arr.add(Integer.toString(numbers[i]));
        }
        arr.sort(new Descending());
        StringBuilder answer = new StringBuilder();
        for (String s : arr) {
            answer.append(s);
        }
        if(answer.charAt(0) == '0')
            return "0";
        return answer.toString();
    }
}
