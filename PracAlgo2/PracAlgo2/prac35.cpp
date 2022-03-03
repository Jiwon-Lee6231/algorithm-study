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
		for (j = 1; j < n - i; j++) {
			if (a[j - 1] > 0 && a[j] < 0) {
				tmp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}