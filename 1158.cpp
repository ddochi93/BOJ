#include <iostream>
#include <stdio.h>
#include <vector>  //list가 효율적?
using namespace std;

int main(void) {
	int n, k;
	int index = 0;
	scanf("%d %d", &n, &k);
	vector<int> arr;
	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}
	

	//for (int i = 0; i < n; i++) {
	//	printf("%d\n", arr.at(i));
	//}
	index = k - 1;
	int n_index = index;
	while (!arr.empty()) {
		index = n_index;
		printf("%d ", arr[n_index]);
		n_index = (index + k) % arr.size();
		if (n_index > index)
			n_index--;
		arr.erase(arr.begin() + index);
	}
	return 0;
}