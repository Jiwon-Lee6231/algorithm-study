#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> h;
vector<pair<int, int>> p;
int m, res = 2147000000, dist = 0, ch[25];

void dfs(int s, int L) {
	int i, j, sum = 0;
	
	if (L == m) {
		for (i = 0; i < h.size(); i++) {
			int x1 = h[i].first;
			int y1 = h[i].second;
			dist = 2147000000;

			for (j = 0; j < m; j++) {
				int x2 = p[ch[j]].first;
				int y2 = p[ch[j]].second;
				dist = min(dist, abs(x1 - x2) + abs(y1 - y2));
			}

			sum += dist;			
		}

		if (sum < res) res = sum;
	}
	else {
		for (i = s; i < p.size(); i++) {
			ch[L] = i;
			dfs(i + 1, L + 1);
		}
	}
}

int main() {
	int n, i, j, a;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &a);
			if (a == 1) h.push_back(make_pair(i, j));
			else if (a == 2) p.push_back(make_pair(i, j));
		}
	}

	dfs(0, 0);

	printf("%d\n", res);

	return 0;
}