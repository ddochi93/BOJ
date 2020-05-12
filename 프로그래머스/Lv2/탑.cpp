#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	int j = 0;
	int len = heights.size();
	for (int i = len - 1; i >= 0; i--) {
		for (j = i - 1; j >= 0; j--) {
			if (heights[i] < heights[j]) {
				answer.push_back(j + 1);
				break;
			}
		}
		if (j == -1) {
			answer.push_back(0);
		}
	}
	reverse(answer.begin(), answer.end());
	return answer;
}