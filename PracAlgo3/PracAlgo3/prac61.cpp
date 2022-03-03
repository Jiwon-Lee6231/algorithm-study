#include <stdio.h>
#include <algorithm>

using namespace std;

int a[11], path[11], n, m, cnt = 0;

void dfs(int x, int sum) {
	int i;

	if (x >= n) {
		if (sum == m) {
			cnt++;
			for (i = 0; i < n; i++) {
				printf("%d ", path[i]);
			}
			printf("\n");
		}

		return;
	}

	path[x] = a[x];
	dfs(x + 1, sum + a[x]);
	path[x] = -a[x];
	dfs(x + 1, sum - a[x]);
	path[x] = 0;
	dfs(x + 1, sum);
}

int main() {
	int i;
	
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	dfs(0, 0);

	if (cnt > 0) printf("%d\n", cnt);
	else printf("-1\n");

	return 0;
}