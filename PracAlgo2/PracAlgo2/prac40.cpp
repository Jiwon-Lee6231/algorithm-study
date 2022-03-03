#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i, j, tmp, mp = 0, sp = 0;

	scanf("%d", &n);
	vector<int> na(n);
	for (i = 0; i < n; i++)
		scanf("%d", &na[i]);
	sort(na.begin(), na.end());

	scanf("%d", &m);
	vector<int> ma(m);
	for (i = 0; i < m; i++)
		scanf("%d", &ma[i]);
	sort(ma.begin(), ma.end());
	
	vector<int> s(n + m);
	for (i = 0; i < n; i++) {
		if (na[i] > ma[mp]) {
			mp++;
		}
		else if (na[i] == ma[mp]) {
			s[sp++] = ma[mp++];
		}
	}
	
	for (i = 0; i < sp; i++)
		printf("%d ", s[i]);

	return 0;
}