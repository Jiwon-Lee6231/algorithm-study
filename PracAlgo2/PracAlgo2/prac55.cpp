#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i, j = 1;
	stack<int> st;

	scanf("%d", &n);
	vector<int> a(n + 1);

	for (i = 1; i <= n; i++)
		a[i] = i;

	vector<char> str;
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		st.push(m);
		str.push_back('P');
		while (1) {
			if (st.empty()) break;
			if (a[j] == st.top()) {
				st.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
	}

	if (!st.empty()) printf("impossible\n");
	else {
		for (i = 0; i < str.size(); i++) {
			printf("%c", str[i]);
		}
	}
	return 0;
}