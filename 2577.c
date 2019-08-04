#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void my_itoa(int mul, char * num) {
	int cnt = 0; //필요
	int tmp = mul;
	int len = 0;
	while (tmp != 0) {
		tmp /= 10;
		len++;
	}
	//printf("%d는 %d자리 수\n\n",mul, len);
	cnt = len;
	for (int i = 0; i < cnt; i++) {
		len = len - 1;
		num[i] = (mul / (int)pow(10, len)) + 48;
	//	mul = mul % ((int)pow(10, len));
		mul = mul - (num[i] - 48)*(int)pow(10, len);
	}
	num[cnt] = '\0';

}
int main(void) {
	int a =0 , b= 0, c = 0;
	//printf("%d\n", a);
	char cmp = '0';
	int cnt = 0;

	scanf("%d %d %d", &a, &b, &c);
	int mul = a * b*c;
	char num[100];
	my_itoa(mul, num);

	for (int i = 0; i < 10; i++) {
		cnt = 0;
		for (int j = 0; j < strlen(num); j++) {
			if (num[j] == i + 48)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}