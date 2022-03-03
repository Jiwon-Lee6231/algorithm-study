#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int map[30][30];
int dx[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };

struct Dir {
	int x;
	int y;

	Dir(int a, int b) {
		x = a;
		y = b;
	}
};

int main() {
	int n, i, j, k, a, cnt = 0;
	queue<Dir> Q;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == 1) {
				Q.push(Dir(i, j));
				map[i][j] = 0;
				
				while (!Q.empty()) {
					Dir tmp = Q.front();
					Q.pop();

					for (k = 0; k < 8; k++) {
						int xx = tmp.x + dx[k];
						int yy = tmp.y + dy[k];

						if (map[xx][yy] == 1) {
							Q.push(Dir(xx, yy));
							map[xx][yy] = 0;
						}
					}
				}

				cnt++;
			}
		}
	}

	printf("%d\n", cnt);

	return 0;
}
