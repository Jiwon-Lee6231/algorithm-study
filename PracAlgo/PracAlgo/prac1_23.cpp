#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, cnt = 1, max = 0;

	scanf("%d", &n);
	vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			cnt++;
			if (cnt > max) max = cnt;
		}
		else {
			cnt = 1;
		}
	}

	printf("%d\n", max);

	return 0;
}