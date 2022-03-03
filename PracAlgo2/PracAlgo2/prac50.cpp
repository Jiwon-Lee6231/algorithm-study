#include <stdio.h>

int main() {
	int h, w, i, j, k, l, hl, wl, sum = 0, maxs = -2147000000;
	int map[51][51];

	scanf("%d %d", &h, &w);
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	scanf("%d %d", &hl, &wl);

	for (i = 0; i < h - hl; i++) {
		for (j = 0; j < w - wl; j++) {
			sum = 0;

			for (k = i; k < i + hl; k++) {
				for (l = j; l < j + wl; l++) {
					sum += map[k][l];
				}
			}

			if (sum > maxs) maxs = sum;
		}
	}

	printf("%d", maxs);

	return 0;
}