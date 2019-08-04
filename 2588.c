#include <stdio.h>

int main(void) {
	int a;
	int b1, b2, b3;
	scanf("%d", &a);
	scanf("%1d %1d %1d", &b1, &b2, &b3);

	printf("%d\n", a * b3);
	printf("%d\n", a * b2);
	printf("%d\n", a * b1);

	printf("%d\n", a * (100 * b1 + 10 * b2 + b3));
	return 0;
}