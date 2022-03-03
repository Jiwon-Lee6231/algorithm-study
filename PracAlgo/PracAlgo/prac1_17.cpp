#include <stdio.h>

int main() {
	int t, n, s;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &s);

		int res = 0;
		for (int j = 1; j <= n; j++)
			res += j;

		if (res == s) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}