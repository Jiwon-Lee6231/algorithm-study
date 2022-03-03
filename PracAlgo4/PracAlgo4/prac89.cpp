#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
int n, m, res = -2147000000;
int map[1010][1010], day[1010][1010];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

struct Dir {
	int x;
	int y;

	Dir(int a, int b) {
		x = a;
		y = b;
	}
};

queue<Dir> Q;

int main() {
	int  i, j;
	
	scanf("%d %d", &m, &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) Q.push(Dir(i, j));
		}
	}
	
	while (!Q.empty()) {
		Dir tmp = Q.front();
		Q.pop();

		for (i = 0; i < 4; i++) {
			int xx = tmp.x + dx[i];
			int yy = tmp.y + dy[i];

			if (map[xx][yy] == 0 && xx >= 1 && xx <= n && yy >= 1 && yy <= m) {
				Q.push(Dir(xx, yy));
				map[xx][yy] = 1;
				day[xx][yy] = day[tmp.x][tmp.y] + 1;
			}
		}
	}
	
	int flag = 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (map[i][j] == 0) flag = 0;
		}
	}
	
	if (flag == 1) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (res < day[i][j]) res = day[i][j];
			}
		}

		printf("%d\n", res);
	}
	else
		printf("-1\n");

	return 0;
}