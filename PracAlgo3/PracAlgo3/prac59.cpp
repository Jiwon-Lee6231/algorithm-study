#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int ch[11];

void d(int x) {
	int i;

	if (x > n) {
		for (i = 1; i <= n; i++) {
			if (ch[i] == 1) printf("%d ", i);
		}
		printf("\n");
		return;
	}

	ch[x] = 1;
	d(x + 1);
	
	ch[x] = 0;
	d(x + 1);
}

int main() {
	scanf("%d", &n);

	d(1);

	return 0;
}