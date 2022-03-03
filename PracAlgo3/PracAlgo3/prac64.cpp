#include <stdio.h>

int map[21][21], ch[21];
int cnt = 0, n;

void dfs(int v) {
	int i;

	if (v == n) {
		cnt++;
	}
	else {
		for (i = 1; i <= n; i++) {
			if (map[v][i] == 1 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	int m, i, a, b;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);

		map[a][b] = 1;
	}
	ch[1] = 1;
	dfs(1);

	printf("%d", cnt);

	return 0;
}