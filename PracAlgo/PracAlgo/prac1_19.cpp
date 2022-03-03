#include <stdio.h>

int main() {
	int n, i, h[101];
	int cnt = 0, max;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &h[i]);
	}

	max = h[n - 1];
	for (i = n - 2; i >= 0; i--) {
		if (h[i] > max) {
			max = h[i];
			cnt++;
		}
	}

	printf("%d \n", cnt);

	return 0;
}