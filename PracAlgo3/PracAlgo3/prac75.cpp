#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct pay {
	int d;
	int m;
	
	pay(int a, int b) {
		m = a;
		d = b;
	}

	bool operator<(pay &b) {
		return d > b.d;
	}
};

int main() {
	int n, i, j, a, b, max = -2147000000, res = 0;
	vector<pay> v;
	priority_queue<int> pQ;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(pay(a, b));

		if (b > max) {
			max = b;
		}
	}
	
	sort(v.begin(), v.end());
	j = 0;
	
	for (i = max; i >= 1; i--) {
		for (; j < n; j++) {
			if (v[j].d < i) break;
			pQ.push(v[j].m);
		}
		
		if (!pQ.empty()) {
			res += pQ.top();
			pQ.pop();
		}
	}
	printf("%d\n", res);

	return 0;
}