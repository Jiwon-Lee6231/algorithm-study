#include <stdio.h>

int main() {
	int n, i, sum = 0;

	scanf_s("%d", &n);

	printf("1 ");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("+ %d ", i);
			sum += i;
		}
	}

	printf("= %d", sum);

	return 0;
}