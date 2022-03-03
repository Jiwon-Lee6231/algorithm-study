#include <stdio.h>

int main() {
	int n, i, j, cnt = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			if (i % j == 0) cnt++;
		printf("%d ", cnt);
		cnt = 0;
	}
	printf("\n");
	
	return 0;
}