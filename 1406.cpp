#include <stdio.h>
#include <string>
#include <stack>
#include <string.h>
using namespace std;

char str[100001];
stack<char> l, r;

int main(void) {
	int t;
	char command;
	char ch;
	int len = 0;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		l.push(str[i]);
	}
	scanf("%d", &t);

	while (t--) {
		scanf(" %c", &command);
		if (command == 'P') {
			scanf(" %c", &ch);  //띄어쓰기 필요?
		}

		switch (command) {
		case 'P':
			l.push(ch);
			break;
		case 'L':
			if (!l.empty()) {
				r.push(l.top());  //이거 인자가 이상...
				l.pop();
			}
			break;
		case 'D':
			if (!r.empty()) {
				l.push(r.top());
				r.pop();
			}
			break;
		case 'B':
			if (!l.empty()) {
				l.pop();
			}
			break;
		}
	}

	while (!l.empty()) {
		r.push(l.top());
		l.pop();
	}

	while (!r.empty()) {
		printf("%c", r.top());
		r.pop();
	}

	
	return 0;
}