#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int map[12][12];
vector<pair<int, int>> v;
int n, maxc, minl;

void dfs(int idx, int line, int conn) {
	if (idx == v.size()) {
		if (conn > maxc) {
			minl = line;
			maxc = conn;
		}
		else if (conn == maxc) {
			if (minl > line) minl = line;
		}
	
		return;
	}

	for (int i = 0; i < 4; i++) {
			int nx = v[idx].first;
			int ny = v[idx].second;
			int cnt = 0;

			while (1) {
				nx += dx[i];
				ny += dy[i];
				cnt++;

				if (map[nx][ny] == 1 || map[nx][ny] == 2) {
					cnt = 0;
					break;
				}

				if (map[nx][ny] == 0 && (nx == 0 || ny == 0 || nx == n - 1 || ny == n - 1))
					break;
			}

			if (cnt > 0) {
				nx = v[idx].first;
				ny = v[idx].second;

				while (1) {
					nx += dx[i];
					ny += dy[i];

					if (nx < 0 || ny < 0 || nx > n - 1 || ny > n - 1)
						break;

					map[nx][ny] = 2;
				}

				dfs(idx + 1, line + cnt, conn + 1);

				nx = v[idx].first;
				ny = v[idx].second;

				while (1) {
					nx += dx[i];
					ny += dy[i];

					if (nx < 0 || ny < 0 || nx > n - 1 || ny > n - 1)
						break;

					map[nx][ny] = 0;
				}
			}
		}

	dfs(idx + 1, line, conn);
}


int main() {
	int t;
	scanf_s("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		scanf_s("%d", &n);
		v.clear();

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &map[i][j]);

				if (map[i][j] == 1) {
					if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
						continue;

					v.push_back(pair<int, int>(i, j));
				}
			}
		}

		maxc = 0;
		minl = 987654321;
		dfs(0, 0, 0);
		printf("#%d %d\n", tc, minl);
	}

	return 0;
}