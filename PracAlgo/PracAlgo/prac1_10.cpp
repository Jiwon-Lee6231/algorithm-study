#include <stdio.h>

int digit_sum(int m) {
	int tmp, sum = 0;

	while (m > 0) {
		tmp = m % 10;
		sum += tmp;
		m /= 10;
	}

	return sum;
}

int main() {
	int n, i;
	int max = -2147000000, sum = 0, res = 0;
	int arr[101];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		sum = digit_sum(arr[i]);

		if (sum > max) {
			max = sum;
			res = arr[i];
		}
		else if (sum == max) {
			if (arr[i] > res)
				res = arr[i];
		}
	}
	
	printf("%d", res);

	return 0;
}