#include <stdio.h>
#include <vector>
#define x first;
#define y second;

using namespace std;

int n, res = 0, T[16], P[20];

void dfs(int v, int sum) {
	int i;

	if (v == n + 1) {
		if (sum > res) res = sum;
	}
	else {
		if (v + T[v] <= n + 1) dfs(v + T[v], sum + P[v]);
		dfs(v + 1, sum);
	}
}

int main() {
	int i;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &T[i], &P[i]);
	}

	dfs(1, 0);

	printf("%d\n", res);

	return 0;
}