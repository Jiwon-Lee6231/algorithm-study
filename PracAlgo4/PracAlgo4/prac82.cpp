#include <stdio.h>

int n, r, cnt = 0;
int a[16], ch[16], res[16];

void dfs(int v) {
	int i;

	if (v == r) {
		for (i = 0; i < r; i++) {
			printf("%d ", res[i]);
		}
		cnt++;
		printf("\n");
	}
	else {
		for (i = 0; i < n; i++) {
			if (ch[i] == 0) {
				res[v] = a[i];
				ch[i] = 1;
				dfs(v + 1);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	int i;

	scanf("%d %d", &n, &r);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	dfs(0);

	printf("%d\n", cnt);

	return 0;
}