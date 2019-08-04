#include <stdio.h>
#include <math.h>

int n = 1;
int cnt = 0;

int main(void) {
	while (1) {
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			break;

		for (int i = n + 1; i <= 2 * n; i++) {
			if (isPrime(i))
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

int isPrime(int n) {
	for (int i = 2; i <= sqrt(n) ; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}