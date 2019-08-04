#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#define MAX 10001

char command[100];
int stack[MAX];
int top;

void myflush() {
	while (getchar() != '\n');
}
int isEmpty() {
	if (top == 0)
		return 1;
	else
		return 0;
}

int peek() {
	if (isEmpty())
		return -1;
	return stack[top-1];
}

int pop() {
	if (isEmpty())
		return -1;
	return stack[--top];
}

void push(int data) {
	stack[top++] = data;
}

int main(void) {
	int testCase =0 ;
	int pushNum =0 ;
	scanf("%d", &testCase);
//	printf("%d\n\n\n", top);
	for (int i = 0; i < testCase; i++) {
		myflush();
		scanf("%s", command);
		if (strcmp(command, "push") == 0) {   //push가 입력되었따면..
			scanf("%d", &pushNum);
			push(pushNum);
		}
		else if (strcmp(command, "top") ==0) {
			printf("%d\n", peek());
		}
		else if (strcmp(command, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", top);
		}
		else if (strcmp(command, "empty")== 0) {
			printf("%d\n", isEmpty());
		}

	}
	return 0;
}

