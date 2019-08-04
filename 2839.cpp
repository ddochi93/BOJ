#include <cstdio>
#define MAX 98765
using namespace std;

int min = 98765;

int main(void) {
	int cnt5 = 0;
	int cnt3 = 0;
	int N;
	int i = 0;
	scanf("%d", &N);
	int remainder = N;

	if (N / 5 != 0) {
		for (i = 0; i <= N / 5; i++) {
			if ((N - i * 5) % 3 == 0) {
				cnt5 = i;
				cnt3 = (N - i * 5) / 3;
				if (cnt5 + cnt3 < min)
					min = cnt5 + cnt3;
			}
		}
		if (min == MAX) {
			printf("-1");
		}
		else {
			printf("%d", min);
		}
	}
	else if (N == 3) {
		printf("1");
	}
	else {
		printf("-1");
	}
}