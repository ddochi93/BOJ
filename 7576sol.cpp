#include <stdio.h>
//typedef struct coor {
//	int x;
//	int y;
//}Cor;

int queue[1003 * 1003 * 2];

int front, rear;
int grp[1003][1003];
int row, col;
//int day = 0;
int cnt = 0;

void output();


void enqueue(int num) {
	queue[rear++] = num;
}

int dequeue() {
	return queue[front++];
}

int isQueueEmpty() {
	if (front == rear) return 1;
	else return 0;
}

int inRange(int m, int n)
{
	if ((0 < m && m <= row) && (0 < n && n <= col))
		return 1;
	else
		return 0;
}

void BFS() {
	//day++;

	while (!isQueueEmpty()) {
		int row = dequeue();
		int col = dequeue();

		if (inRange(row - 1, col) && grp[row - 1][col] == 0) {
			grp[row - 1][col] = grp[row][col] + 1;
			enqueue(row - 1);
			enqueue(col);
		}
		if (inRange(row + 1, col) && grp[row + 1][col] == 0) {
			grp[row + 1][col] = grp[row][col] + 1;
			enqueue(row + 1);
			enqueue(col);
		}
		if (inRange(row, col + 1) && grp[row][col + 1] == 0) {
			grp[row][col + 1] = grp[row][col] + 1;
			enqueue(row);
			enqueue(col + 1);
		}
		if (inRange(row, col - 1) && grp[row][col - 1] == 0) {
			grp[row][col - 1] = grp[row][col] + 1;
			enqueue(row);
			enqueue(col - 1);
		}
		/*	printf("\n");
			output();
			printf("\n");*/
			//	day++;
	}

	//getchar();
}

void output() {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			printf("%d ", grp[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int max = 0;
	scanf("%d %d", &col, &row);

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			scanf("%d", &grp[i][j]);
		}
	}
	//printf("\n");
	////output();
	//printf("\n");

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (grp[i][j] == 1) {
				enqueue(i);
				enqueue(j);
			}
			//BFS(i, j);
		}
	}

	BFS();

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (grp[i][j] == 0)       //다돌았는데 안익은게 있다면..
			{
				printf("-1\n");
				return 0;
			}
			else if (max < grp[i][j]) {
				max = grp[i][j];
			}
		}
	}

	printf("%d\n", max - 1);
	//	output();
	//	printf("day: %d\n", day);
	return 0;
}