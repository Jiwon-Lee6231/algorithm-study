#include <stdio.h>
#include <algorithm>

using namespace std;

int a[1001], n;

int Count(int s) {
	int i, cnt = 1, sum = 0;

	for (i = 1; i <= n; i++) {
		if (sum + a[i] > s) {
			cnt++;
			sum = a[i];
		}
		else sum += a[i];
	}

	return cnt;
}

int main() {
	int m, i, start = 0, end = 0, mid = 0, res = 0, maxt = -2147000000;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		end += a[i];

		if (a[i] > maxt) maxt = a[i];
	}

	while (start <= end) {
		mid = (start + end) / 2;
		if (mid >= maxt && Count(mid) <= m) {
			res = mid;
			end = mid - 1;
		}
		else start = mid + 1;
	}

	printf("%d \n", res);

	return 0;
}