#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a[10][10];
	int i, j, avg = 0, sum = 0, n = 0, minx = 100, res = 0;

	for (i = 0; i < 9; i++) {
		sum = 0;
		
		for (j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		avg = sum / 9;
		minx = 100;

		for (j = 0; j < 9; j++) {
			n = abs(a[i][j] - avg);

			if (minx > n) {
				minx = n;
				res = a[i][j];
			}
			else if (minx == n) {
				if (a[i][j] > res) res = a[i][j];
			}
		}

		printf("%d %d\n", avg, res);
	}

	return 0;
}