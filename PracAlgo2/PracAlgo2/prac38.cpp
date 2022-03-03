#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, i, j, tmp;
	scanf("%d", &n);
	vector<int> is(n + 1), os(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &is[i]);
	}

	for (i =  n; i >= 1; i--) {
		tmp = i;
		for (j = 1; j <= is[i]; j++) {
			os[tmp] = os[tmp + 1];
			tmp++;
		}
		os[tmp] = i;
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", os[i]);
	}
	return 0;
}