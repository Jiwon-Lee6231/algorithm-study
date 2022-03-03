#include <stdio.h>

int main() {
	int n, i, j, k, cnt = 0;
	int a[11][11];


	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &k);

		for (j = 0; j < n; j++) {
			a[j][i] = k;
		}
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		
		for (j = 0; j < n; j++) {
			if (a[i][j] > k)
				a[i][j] = k;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > 0) cnt += a[i][j];
		}
	}

	printf("%d", cnt);

	return 0;
}