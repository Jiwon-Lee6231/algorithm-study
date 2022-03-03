#include <stdio.h>

int map[8][8], ch[8][8], cnt = 0;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

void dfs(int x, int y) {
	int i, posx, posy;

	if (x == 7 && y == 7) {
		cnt++;
	}
	else {
		for (i = 0; i < 4; i++) {
			posx = x + dx[i];
			posy = y + dy[i];

			if (posx < 1 || posx > 7 || posy < 1 || posy > 7) continue;
			else {
				if (map[posx][posy] == 0 && ch[posx][posy] == 0) {
					ch[posx][posy] = 1;
					dfs(posx, posy);
					ch[posx][posy] = 0;
				}
			}
		}
	}
			
			

}

int main() {
	int i, j;

	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= 7; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	ch[1][1] = 1;
	dfs(1, 1);

	printf("%d\n", cnt);

	return 0;
}