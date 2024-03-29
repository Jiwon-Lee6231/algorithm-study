#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int ch[30], cnt = 0, n;
vector<int> map[30];

void dfs(int v) {
	int i;

	if (v == n) {
		cnt++;
	}
	else {
		for (i = 0; i < map[v].size(); i++) {
			if (ch[map[v][i]] == 0) {
				ch[map[v][i]] = 1;
				dfs(map[v][i]);
				ch[map[v][i]] = 0;
			}
		}
	}
}

int main() {
	int m, i, a, b;

	scanf("%d %d", &n, &m);

	for (i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}

	ch[1] = 1;
	dfs(1);
	printf("%d\n", cnt);

	return 0;
}