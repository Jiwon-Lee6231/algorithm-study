#include <stdio.h>

int main() {
	int n, i, a, b = 1, cnt = 0;
	
	scanf("%d", &n);
	a = n - 1;

	while (a > 0) {
		b++;
		a = a - b;
		if (a % b == 0) {
			for (i = 1; i < b; i++) {
				printf("%d + ", (a / b) + i);
			}

			printf("%d = %d\n", (a / b) + i, n);
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}