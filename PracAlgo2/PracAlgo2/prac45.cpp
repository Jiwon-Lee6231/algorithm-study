#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k, tmp, pos = 1, cnt = 0, i;

	scanf("%d %d", &n, &k);
	
	vector<int> a(n + 1);
	tmp = n;

	while (tmp > 1) {
		if (pos > n) pos = 1;

		if (a[pos] == 0) {
			cnt++;

			if (cnt == k) {
				a[pos] = 1;
				cnt = 0;
				tmp--;
			}
		}

		pos++;
	}

	for (i = 1; i <= n; i++) {
		if (a[i] == 0) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}