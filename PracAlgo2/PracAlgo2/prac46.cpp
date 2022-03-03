#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k, i, p = -1, pos = 0, tot = 0;

	scanf("%d", &n);
	vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		tot += a[i];
	}

	scanf("%d", &k);
	if (k >= tot) {
		printf("-1\n");
		return 0;
	}

	while (k > 0) {
		p++;
		if (p >= n) p = 0;

		if (a[p] == 0) continue;
		a[p]--;
		k--;
	}

	while (1) {
		p++;
		if (p >= n) p = 0;
		if (a[p] != 0) break;
	}

	printf("%d", p + 1);


	return 0;
}