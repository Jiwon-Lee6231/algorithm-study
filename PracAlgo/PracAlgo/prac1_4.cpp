#include <stdio.h>

int main() {
	int n, m, i, max = -214700000, min = 2147000000;
	
	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf_s("%d", &m);

		if (m > max) max = m;
		if (m < min) min = m;
	}

	printf("%d", max - min);
}