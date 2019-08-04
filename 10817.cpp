#include <cstdio>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b) {
		if (c > a)
			printf("%d\n", a);
		else if (c > b)
			printf("%d\n", c);
		else 
			printf("%d\n", b);
	}
	else  {
		if (c > b)
			printf("%d\n", b);
		else if (c > a)
			printf("%d\n", c);
		else
			printf("%d\n", a);
	}
	return 0;
}