#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, a[11], op[5], maxr = -2147000000, minr = 2147000000;

void dfs(int v, int sum) {
	if (v == n) {
		if (sum > maxr) maxr = sum;
		if (sum < minr) minr = sum;
	}
	else {
		if (op[0] > 0) {
			op[0]--;
			dfs(v + 1, sum + a[v]);
			op[0]++;
		}
		if (op[1] > 0) {
			op[1]--;
			dfs(v + 1, sum - a[v]);
			op[1]++;
		}
		if (op[2] > 0) {
			op[2]--;
			dfs(v + 1, sum * a[v]);
			op[2]++;
		}
		if (op[3] > 0) {
			op[3]--;
			dfs(v + 1, sum / a[v]);
			op[3]++;
		}
	}
}

int main() {
	int i;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 4; i++) {
		scanf("%d", &op[i]);
	}

	dfs(1, a[0]);
	
	printf("%d\n", maxr);
	printf("%d\n", minr);

	return 0;
}