#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	
	vector<int> a(n);
	vector<int> rank(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		rank[i] = 1;
	}

	for (i = 1; i < n; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > a[i]) rank[i]++;
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", rank[i]);
	}
	

	return 0;
}