#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int n;

int Count(int l, int x[]) {
	int i, cnt = 1, pos = x[0];
	for (i = 1; i < n; i++) {
		if (x[i] - pos >= l) {
			cnt++;
			pos = x[i];
		}
	}

	return cnt;
}


int main() {
	int c, i, lt = 0, rt = 0, mid = 0, res = 0;	
	
	scanf("%d %d", &n, &c);
	int* x = new int[n + 1];

	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	sort(x, x + n);

	rt = x[n - 1];
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (Count(mid, x) >= c) {
			res = mid;
			lt = mid + 1;
		}
		else rt = mid - 1;
	}

	printf("%d\n", res);
	delete[] x;
	return 0;
}