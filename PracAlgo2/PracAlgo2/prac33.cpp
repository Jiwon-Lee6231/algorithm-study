#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, i, j, tmp, cnt = 0;
	scanf("%d", &n);
	vector<int> a(n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (i = 1; i < n; i++) {
		if (a[i - 1] != a[i]) cnt++;
		if (cnt == 2) {
			printf("%d", a[i]);
			break;
		}
	}
	
	return 0;
}