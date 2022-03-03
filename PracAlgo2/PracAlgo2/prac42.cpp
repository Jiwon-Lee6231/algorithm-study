#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i;
	int start = 0, end = 0, mid = 0;
	scanf("%d %d", &n, &m);
	vector<int> a(n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	end = n - 1;
	while (start <= end) {
		mid = (start + end) / 2;

		if (a[mid] == m) {
			printf("%d \n", mid + 1);
			return 0;
		}
		else if (a[mid] > m) end = mid - 1;
		else start = mid + 1;
	}

	return 0;
}