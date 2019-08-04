#include <stdio.h>
#include <string.h>




char str[1000001];
char str_temp[1000001];



int main(void) {
	fgets(str, sizeof(str), stdin);

	str[strlen(str) - 1] = '\0';

	

	int cnt = 1;
	if (str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		cnt--;

	if (str[0] == ' ')
		str[0] = 'a';
	if (str[strlen(str)-1 ] == ' ')
		str[strlen(str)-1] = 'a';

//	printf("strlen : %d\n", strlen(str));
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' ) {
			cnt++; 
		}
	}

	printf("%d\n", cnt);
	return 0;
}