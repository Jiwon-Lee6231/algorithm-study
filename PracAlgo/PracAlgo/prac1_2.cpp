#include <stdio.h>

int main() {
	int a, b, i, sum = 0;

	scanf_s("%d %d", &a, &b);

	for (i = a; i < b; i++) {
		printf("%d+", i);
		sum += i;
	}

	printf("%d=%d", i,sum+i);

	return 0;
}