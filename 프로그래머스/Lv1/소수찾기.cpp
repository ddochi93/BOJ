#include <string>
#include <vector>
#include <cmath>
#define MAX 1000000
using namespace std;

bool arr[MAX];

bool isPrime(int n) {
    for(int i = 2 ; i*i <= n ; i++) {
        if( n % i == 0) 
            return false;
    }
    return true;
}

int solution(int n) {
    int answer = 0;
    for(int i = 2; i <= (n) ; i++) {
        // if(isPrime(i)) {
        //     answer++;
        // }
        if(arr[i] == false) {
            answer++;
            for(int j = 2 ; j <= MAX / i ; j++) {
                arr[i*j] = true;
            }
        }
    }
    return answer;
}
