#include <cstdio>

int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m >= 45) {
		printf("%d %d\n", h, m - 45);
	}
	else {
		if (h == 0) {
			printf("23 %d\n", 15 + m);
		}
		else {
			printf("%d %d\n", h - 1, 15 + m);
		}
	}
	return 0;
}