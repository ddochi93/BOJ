//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//
//int main(void) {
//	int t, h, w, n;
//	int i;
//	int xx = 0;
//	int yy = 0;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++) {
//		scanf("%d %d %d", &h, &w, &n);
//		if (n%h != 0) {
//			xx = n / h + 1;
//			yy = n % h;
//			printf("%d\n", yy * 100 + xx);
//		}
//		else {
//			xx = n / h;
//			yy = h;
//			printf("%d\n", yy * 100 + xx);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int T, H, W, N;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d", &H, &W, &N);
		N--;
		printf("%d%02d\n", N%H + 1, N / H + 1);
	} 
}