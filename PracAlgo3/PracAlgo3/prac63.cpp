#include <stdio.h>

int main(void) {
	int n, m, i, a, b, k;
	int map[21][21] = { 0 };

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &k);
		map[a - 1][b - 1] = k;
	}

	for (a = 0; a < n; a++) {
		for (b = 0; b < n; b++) {
			printf("%d ", map[a][b]);
		}
		printf("\n");
	}
}