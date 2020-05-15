import java.util.ArrayList;

class Solution {
    public int[] solution(int n) {
        //int[] answer = {};
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Integer> temp = null;
        ArrayList<Integer> nList = new ArrayList<>();
        list.add(0);

        for(int i = 1 ; i < n ; i++) {
            nList.clear();
            int len = list.size();
            for(int j = 0 ; j  < len ; j++) {
                temp = new ArrayList<>();
                if(j % 2 == 0)
                    temp.add(0);
                temp.add(list.get(j));
                if(j % 2 == 0)
                    temp.add(1);
                nList.addAll(temp);
            }
            list.clear();
            list.addAll(nList);
            var a = list;
        }
        int[] ans = new int[list.size()];
        int size=0;
        for(Integer num : list){
            ans[size++] = num;
        }
        return ans;
    }
}