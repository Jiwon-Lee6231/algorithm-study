#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, m, i, na[101], ma[101];
	int p1 = 0, p2 = 0, p3 = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &na[i]);

	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d", &ma[i]);

	vector<int> s(n + m);
	while (p1 < n && p2 < m) {
		if (na[p1] < ma[p2]) {
			s[p3++] = na[p1++];
		}
		else {
			s[p3++] = ma[p2++];
		}
	}

	while (p1 < n) s[p3++] = na[p1++];
	while (p2 < m) s[p3++] = ma[p2++];

	for (i = 0; i < p3; i++)
		printf("%d ", s[i]);

	return 0;
}