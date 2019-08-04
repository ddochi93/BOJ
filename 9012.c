#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#define MAX 1000

int top;
char stack[51];
char str[51];
int flag = 0;

void push(char c) {
	stack[top++];
}
char pop() {
	if(top > 0 )     //이거 필수
		stack[--top]; 
}
int isEmpty() {
	if (top == 0)
		return 1;
	else
		return 0;
}

void initStack() {
	top = 0;
}

int check() {
	int rcnt = 0;
	int lcnt = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ')')
			rcnt++;
		else
			lcnt++;
	}
	if (lcnt == rcnt)  
		return 1;
	else
		return 0;
}

int main(void) {
	int testCase;
	scanf("%d", &testCase);
	for (int i = 0; i < testCase; i++) {
		initStack();
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == '(')
				push(str[i]);
			else if ( str[i] == ')')
				pop();
		}
		
		printf("%s\n", ( check()==1 && isEmpty() == 1 ) ? "YES" : "NO");
	}
	return 0;
}