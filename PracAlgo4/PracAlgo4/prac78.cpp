#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int unf[1001], res = 0;

struct Edge {
	int v1;
	int v2;
	int cost;
	
	Edge(int a, int b, int c) {
		v1 = a;
		v2 = b;
		cost = c;
	}

	bool operator < (Edge& b) {
		return cost < b.cost;
	}
};

int Find(int v) {
	if (v == unf[v]) return v;
	else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) unf[a] = b;
}

int main() {
	int v, e, i, a, b, c;
	vector<Edge> ed;

	scanf("%d %d", &v, &e);

	for (i = 1; i <= v; i++) {
		unf[i] = i;
	}

	for (i = 0; i < e; i++) {
		scanf("%d %d %d", &a, &b, &c);
		ed.push_back(Edge(a, b, c));
	}
	sort(ed.begin(), ed.end());

	for (i = 0; i < e; i++) {
		int f = Find(ed[i].v1);
		int b = Find(ed[i].v2);

		if (f != b) {
			res += ed[i].cost;
			Union(ed[i].v1, ed[i].v2);
		}
	}


	printf("%d\n", res);

	return 0;
}