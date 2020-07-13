import java.util.Queue;
import java.util.LinkedList;

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int sec = 0; 
        int sum = 0;
        
        Queue<Integer> waiting = new LinkedList<>();
        for(int truck : truck_weights) {
            waiting.add(truck);
        }
        Queue<Truck> onBridge = new LinkedList<>();
        onBridge.add(new Truck(waiting.peek(), 0));
        sum += waiting.poll();
        
        for(sec = 1 ; ; sec++) {
            distPlus(onBridge);
            if(onBridge.isEmpty()) {
                break;
            } else if(onBridge.peek().dist >= bridge_length) {
                Truck t = onBridge.poll();
                sum -= t.weight;
            }
            
            
            if(!waiting.isEmpty()) {
                if(sum + waiting.peek() <= weight) { //sum + waiting.peek() < weight 으로 해서 틀림
                    onBridge.add(new Truck(waiting.peek(), 0));
                    sum += waiting.poll();
                }
            }
        }
    
        return sec;
    }
    
    public void distPlus(Queue<Truck> q) {
        for(Truck t : q) {
            t.add();
            //System.out.print(t.dist + " ");
        }
        //System.out.println();
    }
}

class Truck {
    int weight;
    int dist;
    
    Truck(int weight, int dist) {
        this.weight = weight;
        this.dist = dist;
    }
    
    public void add() {
        ++dist;
    }
}
