#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int n, r;
int ch[20];

void dfs(int s, int L) {
	int i;

	if (L == r) {
		for (i = 0; i < L; i++) {
			printf("%d ", ch[i]);
		}
		printf("\n");
	}
	else {
		for (i = s; i < n; i++) {
			ch[L] = i;
			dfs(i + 1, L + 1);
		}
	}
}

int main() {
	scanf("%d %d", &n, &r);
	
	dfs(0, 0);

	return 0;
}