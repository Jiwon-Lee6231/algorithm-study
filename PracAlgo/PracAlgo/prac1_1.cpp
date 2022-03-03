#include <stdio.h>

int main()
{
	int n, m, i;
	int sum = 0;

	scanf_s("%d %d", &n, &m);
	
	for (i = 1; i <= n; i++) {
		if (i % m == 0)
			sum += i;
	}

	printf("%d", sum);

	return 0;
}