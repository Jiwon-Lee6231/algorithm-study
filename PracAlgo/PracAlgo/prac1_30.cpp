#include <stdio.h>

int main() {
	int n, lt = 1, cur, rt, k = 1, res = 0;

	scanf("%d", &n);

	while (lt != 0) {
		lt = n / (k * 10);
		cur = (n / k) % 10;
		rt = n % k;
		if (cur > 3)
			res = res + ((lt + 1) * k);
		else if (cur < 3)
			res = res + (lt * k);
		else
			res = res + (lt * k) + (rt + 1);

		k *= 10;
	}

	printf("%d", res);

	return 0;
}