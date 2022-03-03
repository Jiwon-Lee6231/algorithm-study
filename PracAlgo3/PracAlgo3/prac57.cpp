#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

stack<int> st;

void d(int x) {
	if (x == 0) {
		return;
	}

	st.push(x % 2);
	d(x / 2);
}

int main() {
	int n;
	scanf("%d", &n);

	d(n);

	while (!st.empty()) {
		printf("%d", st.top());
		st.pop();
	}

	return 0;
}