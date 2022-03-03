#include <stdio.h>

int main() {
	int n, i, tmp, digit = 0, cnt = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		tmp = i;

		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3) cnt++;
			
			tmp /= 10;
		}
	}

	printf("%d", cnt);

	return 0;
}