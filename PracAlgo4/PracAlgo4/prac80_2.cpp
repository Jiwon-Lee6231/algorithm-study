#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Edge {
	int vex;
	int dis;
	Edge(int a, int b) {
		vex = a;
		dis = b;
	}

	bool operator < (const Edge& b) const {
		return dis > b.dis;
	}
};

int main() {
	int n, m, i, a, b, c;
	
	priority_queue<Edge> Q;
	vector<pair<int, int>> graph[30];
	scanf("%d %d", &n, &m);

	vector<int> dist(n + 1, 2147000000);
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back(make_pair(b, c));
	}

	Q.push(Edge(1, 0));
	dist[1] = 0;
	
	while (!Q.empty()) {
		int now = Q.top().vex;
		int cost = Q.top().dis;
		Q.pop();

		if (cost > dist[now]) continue;

		for (i = 0; i < graph[now].size(); i++) {
			int next = graph[now][i].first;
			int nextDist = cost + graph[now][i].second;

			if (dist[next] > nextDist) {
				dist[next] = nextDist;
				Q.push(Edge(next, nextDist));
			}
		}
	}

	

	for (i = 2; i <= n; i++) {
		if (dist[i] != 2147000000) printf("%d : %d\n", i, dist[i]);
		else printf("%d : impossible\n", i);
	}

	return 0;
}