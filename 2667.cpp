#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 26

char grp[MAX][MAX];
int visited[MAX];
int vertex;
int danji[MAX*MAX];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt;


void DFS(int i, int j) {
	grp[i][j] = '0';
	danji[cnt]++;
	for (int idx = 0; idx < 4; idx++) {
		//printf("%d\n\n", grp[-1][-1]);
		if (grp[i + dx[idx]][j + dy[idx]] == '1') {
			DFS(i + dx[idx], j + dy[idx]);
		}
	}
	
}

int main(void) {
	scanf("%d", &vertex);
	for (int i = 0; i < vertex; i++) {
		scanf("%s", grp[i]);
	}
	//printf("\n\n\n");
	//for (int i = 0; i < vertex; i++) {
	//	for (int j = 0; j < vertex; j++) {
	//		printf("%c ", grp[i][j]);
	//	}
	//	printf("\n");
	//}

	for (int i = 0; i < vertex; i++) {
		for (int j = 0; j < vertex; j++) {
			if (grp[i][j] == '1') {
				DFS(i, j);
				cnt++;
			}
		}
	}
	
	printf("%d\n", cnt);
	sort(danji, danji + cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%d\n", danji[i]);
	}
	return 0;
}