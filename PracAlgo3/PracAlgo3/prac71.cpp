#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[10001];

int main() {
	int s, e, i, x, pos = 0;

	scanf("%d %d", &s, &e);
	queue<int> Q;
	int a[3] = { 1, -1, 5 };
	
	Q.push(s);
	ch[s] = 1;

	while (!Q.empty()) {
		x = Q.front();
		Q.pop();

		for (i = 0; i < 3; i++) {
			pos = x + a[i];
			if (pos <= 0 || pos > 10000) continue;

			if (pos == e) {
				printf("%d\n", ch[x]);
				exit(0);
			}
			if (ch[pos] == 0) {
				ch[pos] = ch[x] + 1;
				Q.push(pos);
			}
		}
		
		
	}



	return 0;
}