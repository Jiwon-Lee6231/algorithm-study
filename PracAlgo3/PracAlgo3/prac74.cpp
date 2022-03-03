#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int a;
	priority_queue<int> pQ;

	while (1) {
		scanf("%d", &a);

		if (a == -1) break;

		if (a == 0) {
			if (pQ.empty()) printf("-1\n");
			else {
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
		}
		else {
			pQ.push(-a);
		}
	}

	return 0;
}