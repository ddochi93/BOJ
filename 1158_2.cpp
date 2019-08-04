#include <stdio.h>
#include <queue>
using namespace std;

int main(void) {
	queue<int> q;
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}


	printf("<");
	while (!q.empty()) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() != 1) {
			printf("%d, ", q.front());
			q.pop();

		}
		else {
			printf("%d", q.front());
			q.pop();
		}
	}
	printf(">\n");
	return 0;
}