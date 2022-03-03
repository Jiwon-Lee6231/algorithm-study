#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int map[10][10];
int dist[10][10];
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

int main() {
	int i, j, res = 0;

	queue<Dir> Q;
	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= 7; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	Q.push(Dir(1, 1));
	map[1][1] = 1;
	 
	while (!Q.empty()) {
		Dir pos = Q.front();
		Q.pop();

		for (i = 0; i < 4; i++) {
			int xx = pos.x + dx[i];
			int yy = pos.y + dy[i];

			if (map[xx][yy] == 0 && xx >= 1 && xx <= 7 && yy >= 1 && yy <= 7) {
				Q.push(Dir(xx, yy));
				map[xx][yy] = 1;
				dist[xx][yy] = dist[pos.x][pos.y] + 1;
			}
		}
	}
	
	printf("%d\n", dist[7][7]);

	return 0;
}