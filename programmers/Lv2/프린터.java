import java.util.LinkedList;
import java.util.Queue;

class Pair {
    int idx;
    int priority;

    Pair(int idx, int priority) {
        this.idx = idx;
        this.priority = priority;
    }
}

class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        Queue<Pair> q = new LinkedList();
        for(int i = 0 ; i < priorities.length ; i++) {
            q.add(new Pair(i, priorities[i]));
        }
        while(true) {
            Pair temp = q.poll();
            answer++;
            boolean isMax = true;
            for(Pair a : q) {
                if(a.priority > temp.priority) {
                    isMax = false;
                }
            }
            if(isMax) {
                //Pair an = q.peek();
                if(temp.idx == location)
                    break;
            } else {
                q.offer(temp);
                answer--;
            }
        }
        System.out.println(q);
        return answer;
    }
}