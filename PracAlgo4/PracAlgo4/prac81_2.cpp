#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dist[101];
struct Edge {
	int s;
	int e;
	int val;

	Edge(int a, int b, int c) {
		s = a;
		e = b;
		val = c;
	}
};

int main() {
	int  n, m, i, j, a, b, c, s, e;
	vector<Edge> Ed;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	scanf("%d %d", &s, &e);

	for (i = 1; i <= n; i++) {
		dist[i] = 2147000000;
	}

	dist[s] = 0;
	for (i = 1; i < n; i++) {
		for (j = 0; j < Ed.size(); j++) {
			int u = Ed[j].s;
			int v = Ed[j].e;
			int w = Ed[j].val;
			
			if (dist[u] != 2147000000 && dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
			}
		}
	}

	for (j = 0; j < Ed.size(); j++) {
		int u = Ed[j].s;
		int v = Ed[j].e;
		int w = Ed[j].val;

		if (dist[u] != 2147000000 && dist[u] + w < dist[v]) {
			printf("-1\n");
			exit(0);
		}
	}

	printf("%d\n", dist[e]);

	return 0;
}