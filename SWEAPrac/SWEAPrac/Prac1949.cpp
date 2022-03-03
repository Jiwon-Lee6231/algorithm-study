#include <stdio.h>

using namespace std;

int map[10][10];
int visit[10][10];
int max = 0, n = 0, k = 0;
int answer = 0;

int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

struct trail {
	int x, y;
	int height;
	int flag;
	int len;
};

void sol(trail f) {
	answer = answer > f.len ? answer : f.len;

	for (int d = 0; d < 4; d++) {
		trail b = f;
		b.x += dir[d][0];
		b.y += dir[d][1];
		b.height = map[b.x][b.y];

		if (b.x < 0 || b.x >= n || b.y < 0 || b.y >= n) continue;
		if (visit[b.x][b.y]) continue;

		if (b.height < f.height) {
			visit[b.x][b.y] = 1;
			b.len++;
			sol(b);
			visit[b.x][b.y] = 0;
		}
		else {
			if (!f.flag && b.height - k < f.height) {
				visit[b.x][b.y] = 1;
				b.len++;
				b.flag = 1;
				b.height = f.height - 1;
				sol(b);
				visit[b.x][b.y] = 0;
			}
		}
	}
}

int main() {
	int i, j;

	scanf_s("%d %d", &n, &k);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf_s("%d", &map[i][j]);

			max = max > map[i][j] ? max : map[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {

			if (max == map[i][j]) {
				visit[i][j] = 1;
				trail t = { i, j, map[i][j], 0, 1 };
				sol(t);
				visit[i][j] = 0;
			}
		}
	}

	printf("%d\n", answer);

	return 0;
}