#include <stdio.h>
#include <algorithm>

using namespace std;

int n, total = 0, flag = 0;
int a[11];

void d(int x, int sum) {
	if (sum > (total / 2)) return;

	if (flag == 1) return;

	if (x >= n) {
		if (sum == (total - sum)) {
			flag = 1;
		}
		return;
	}

	printf("%d %d\n", x, sum);
	d(x + 1, sum + a[x]);
	d(x + 1, sum);
}

int main() {
	int i;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}

	d(0, 0);

	if (flag == 1) printf("YES\n");
	else printf("NO\n");

	return 0;
}