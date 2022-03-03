#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int ch[30];

struct Edge {
	int e;
	int cost;

	Edge(int b, int c) {
		e = b;
		cost = c;
	}

	bool operator < (const Edge& b) const {
		return cost > b.cost;
	}
};

int main() {
	int v, e, i, a, b, c, res = 0;
	vector<pair<int, int>> map[30];
	priority_queue<Edge> Q;
	pair<int, int> x;

	scanf("%d %d", &v, &e);

	for (i = 0; i < e; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	Q.push(Edge(1, 0));
	while (!Q.empty()) {
		Edge tmp = Q.top();
		Q.pop();

		int v = tmp.e;
		int cost = tmp.cost;

		if (ch[v] == 0) {
			res += cost;
			ch[v] = 1;

			for (i = 0; i < map[v].size(); i++) {
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}

	printf("%d\n", res);

	return 0;
}