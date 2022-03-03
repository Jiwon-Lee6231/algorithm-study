#include <stdio.h>
#include <algorithm>
#include <vector>
#define x first
#define y second

using namespace std;

int ch[21], n, minb = 2147000000;
vector<pair<int, int>> map[21];

void dfs(int v, int sum) {
	int i;

	if (v == n) {
		if (minb > sum) {
			minb = sum;
		}
	}
	else {
		for (i = 0; i < map[v].size(); i++) {
			if (ch[map[v][i].x] == 0) {
				ch[map[v][i].x] = 1;
				dfs(map[v][i].x, sum + map[v][i].y);
				ch[map[v][i].x] = 0;
			}
		}
	}
}

int main() {
	int m, i, a, b, c;

	scanf("%d %d", &n, &m);

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}

	ch[1] = 1;
	dfs(1, 0);
	printf("%d\n", minb);

	return 0;
}