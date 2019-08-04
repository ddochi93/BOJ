#include <cstdio>
int main(void) {
	int n;
	int tmp;
	int cycle= 0;
	scanf("%d", &n);
	tmp = n;
	while (true) {
		tmp = (tmp % 10) * 10 + ((tmp / 10 + tmp % 10)%10);
		//printf("%d\n", tmp);
		cycle++;
		if (tmp == n)
			break;
	}
	printf("%d\n", cycle);
	return 0;
}