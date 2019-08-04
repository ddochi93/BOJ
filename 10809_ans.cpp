#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(void) {
	string str;
      	char alphabet[26];	
	cin >> str;

	for(int i = 'a'  ; i <='z'; i++) {
		int idx = str.find(i);
		alphabet[i-'a'] = idx;
	}
	for(int i = 0 ; i < 26; i++) {
		printf("%d\n",alphabet[i]);
	}
	return 0;
}
