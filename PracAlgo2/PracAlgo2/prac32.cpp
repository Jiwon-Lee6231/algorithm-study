#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, i, j, tmp;
	scanf("%d", &n);
	vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}