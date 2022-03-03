#include <stdio.h>

int main() {
	int n, m, i, tmp;
	int max = -2147000000, cnt = 0;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &tmp);

		if (tmp > m) cnt++;
		else {
			if (cnt > max) max = cnt;
			cnt = 0;
		}
	}
	if (max == 0) printf("-1\n");
	else printf("%d\n", max);

	return 0;
}