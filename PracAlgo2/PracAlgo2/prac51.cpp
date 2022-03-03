#include <stdio.h>

int main() {
	int h, w, i, j, k, l, hl, wl, sum = 0, maxs = -2147000000;
	int map[51][51];
	int dy[51][51];

	scanf("%d %d", &h, &w);
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++) {
			scanf("%d", &map[i][j]);

			dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + map[i][j];
		}
	}
	scanf("%d %d", &hl, &wl);

	for (i = hl; i <= h; i++) {
		for (j = wl; j <= w; j++) {
			sum = dy[i][j] - dy[i - hl][j] - dy[i][j - wl] + dy[i - hl][j - wl];
			if (sum > maxs) maxs = sum;
		}
	}

	printf("%d", maxs);

	return 0;
}