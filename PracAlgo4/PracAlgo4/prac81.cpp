#include <stdio.h>
#include <algorithm>
#include <vector>
#define x first
#define y second

using namespace std;

int ch[100], e, minx = 2147000000;
vector<pair<int, int>> map[100];

void dfs(int v, int sum) {
	int i;

	if (v == e) {
		if (minx > sum) minx = sum;
		return;
	}
	
	for (i = 0; i < map[v].size(); i++) {
		int t = map[v][i].x;
		int cost = map[v][i].y;

		if (ch[t] == 0) {
			ch[t] = 1;
			dfs(t, sum + cost);
			ch[t] = 0;
		}
	}
}

int main() {
	int  n, m, i, a, b, c, s;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}
	scanf("%d %d", &s, &e);

	ch[s] = 1;
	dfs(s, 0);
	
	printf("%d\n", minx);

	return 0;
}