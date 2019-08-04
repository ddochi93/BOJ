#include <cstdio>
int main(void) {
	int year;
	int res;
	scanf("%d", &year);
	printf("%d\n",(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

	//(year % 4 == 0) ? (year%100 ==0 ? res=0 : res =1) : (year % 400 == 0) ? res = 1 : res = 0;
	//printf("%d\n", res);
	return 0;
}