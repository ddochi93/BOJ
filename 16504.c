#include <stdio.h>
long long int arr[1025][1025];
int main(void) {
	long long int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%lld", &arr[i][j]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			sum += arr[i][j];
	}
	printf("%lld\n", sum);
	return 0;
}