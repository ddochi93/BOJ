#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

string check(stack<char> s, char * str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(') {
			s.push('(');
		}
		else {
			if (s.size() != 0) {
				s.pop();
			}
			else {
				return "NO";
			}
		}
	}
	
	if (s.empty() == true)
		return "YES";
	else
		return "NO";
}

int main(void) {
	int t;
	scanf("%d", &t);
	
	while (t--) {
		stack<char> s;
		char str[52];
		scanf("%s", str);
		//printf("%s\n", check(s, str));
		cout << check(s, str) << endl;
	}
	
	return 0;
}