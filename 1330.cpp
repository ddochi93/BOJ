#include <cstdio>

int main(void) {
	int a, b;
	int res = 0;
	scanf("%d %d", &a, &b);

	res = a - b;
	if(res >0)
		printf(">\n");
	else if (res < 0)
		printf("<\n");
	else
		printf("==\n");

	return 0;
}