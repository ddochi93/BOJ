#include <cstdio>

char arr[10];

int main(void) {
	int t;
	int n1, n2;
	int sum = 0;
	scanf("%d", &t);

	while (t--) {
		//sum = 0;
		//scanf("%s", arr);
		//for (int i = 0; i < 10; i++) {
		//	if (arr[i] != ',' && arr[i] != NULL) {
		//	//	printf("%d: %c \n", i, arr[i]);
		//		sum += arr[i] - '0';
		//	}
		//}
		//printf("%d\n", sum);

		scanf("%d,%d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
	return 0;
}