#include <stdio.h>

int main() {
	int n, sum = 0, c = 1, d = 9, res = 0;

	scanf("%d", &n);

	while (sum + d < n) {
		res += (c * 9);
		sum += d;
		c++;
		d *= 10;
	}

	res = res + ((n - sum) * c);
	printf("%d\n", res);

	return 0;
}