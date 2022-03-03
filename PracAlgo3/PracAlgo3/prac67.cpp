#include <stdio.h>

int map[21][21], ch[21];
int n, minb = 2147000000;

void dfs(int v, int sum) {
	int i;

	if (v == n) {
		if (minb > sum) {
			minb = sum;
		}
	}
	else {
		for (i = 1; i <= n; i++) {
			if (map[v][i] != 0 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i, sum + map[v][i]);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	int m, i, a, b, c;
	
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}

	ch[1] = 1;
	dfs(1, 0);

	printf("%d\n", minb);

	return 0;
}