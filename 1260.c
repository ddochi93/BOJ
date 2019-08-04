
#include <stdio.h>
#define MAX 1005

int startPoint;
int grp[MAX][MAX];
int vertex;
int edge;
int stack[MAX*MAX];
int top;
int graphCnt;
int checked[MAX];
int queue[MAX];
int front, rear;

void enqueue(int data) { queue[rear++] = data; }
int dequeue() { return queue[front++]; }
int isQueueEmpty() { if (front == rear) return 1; else return 0; }

void push(int data) { stack[top++] = data; }
int pop() { return stack[--top]; }
int isEmpty() { if (top == 0)return 1; else return 0; }

void createGraph() {
	int v1, v2;
	for (int i = 0; i < edge; i++) {
		scanf("%d %d", &v1, &v2);
		grp[v1 - 1][v2 - 1] = grp[v2 - 1][v1 - 1] = 1;
	}
}

void outputGraph() {
	printf(" ");
	for (int i = 0; i < vertex; i++)
		printf(" %c", i + 'A');
	printf("\n");
	for (int i = 0; i < vertex; i++) {
		printf("%c ", i + 'A');
		for (int j = 0; j < vertex; j++)
			printf("%d ", grp[i][j]);
		printf("\n");
	}
	printf("\n");
}

void initGraph() {
	for (int i = 0; i < vertex; i++) {
		for (int j = 0; j < vertex; j++)
			grp[i][j] = 0;
	}
	vertex = 0;
	edge = 0;//필요? 
	for (int i = 0; i < vertex; i++)
		checked[i] = 0;
}

void DFS(int u) {
	push(u);
	//checked[u] = 1;
	int tmp;
	while (!isEmpty()) {
		tmp = pop();
		if (checked[tmp] == 0) {
			printf("%d ", tmp+1);
			checked[tmp] = 1;
		}
		//printf("%d ", tmp + 1);
		for (int i = vertex-1; i >=0; i--) {
			if (grp[tmp][i] == 1 && checked[i] == 0) {
				//printf("%d ", i);
				push(i);
				//checked[i] = 1;
				//break;  //바로 빠져나온다.
			}
		}
	}
}
void startDFS() {
	DFS(startPoint - 1);
	//for (int i = 0; i < vertex; i++) {
	//	if (checked[i] == 0 && grp[startPoint-1][i] == 1) {
	//		DFS(i);
	//	}
	//}
	printf("\n");
}

void BFS(int u) {
	enqueue(u);
	checked[u] = 1;
	int tmp;
	while (!isQueueEmpty()) {
		tmp = dequeue();
		printf("%d ", tmp + 1);
		for (int i = 0; i < vertex; i++) {
			if (grp[tmp][i] == 1 && checked[i] == 0) {
				enqueue(i);
				checked[i] = 1;
			}
		}
	}
}

void startBFS() {
	graphCnt = 0;
	for (int i = 0; i < vertex; i++)
		checked[i] = 0;
	//for (int i = startPoint - 1; i < vertex; i++) {
	//	if (checked[i] == 0) {
	//		BFS(i);
	//		graphCnt++;
	//		printf("\n");
	//	}
	//}
	BFS(startPoint - 1);

}
int main(void) {
	scanf("%d %d %d", &vertex, &edge, &startPoint);

	//printf("%d %d\n", vertex, edge);

	createGraph();

	//outputGraph();
	startDFS();
	//printf("전체 그래프수 %d\n", graphCnt);

	startBFS();
	//printf("전체 그래프수 %d\n", graphCnt);
	initGraph();
	return 0;
}