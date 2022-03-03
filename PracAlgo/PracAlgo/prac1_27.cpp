#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, i, j, tmp;

	scanf("%d", &n);

	vector<int> cnt(n + 1);

	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;

		while (1) {
			if (tmp % j == 0) {
				tmp /= j;
				cnt[j]++;
			}
			else j++;
			if (tmp == 1) break;
		}
	}

	printf("%d! = ", n);
	for (i = 1; i <= n; i++) {
		if (cnt[i] > 0) printf("%d ", cnt[i]);
	}

	return 0;
}