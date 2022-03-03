#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	char s[31];
	stack<char> st;
	int i = 0;

	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else {
			if (st.empty()) {
				printf("NO\n");
				return 0;
			}
			else st.pop();
		}
	}
	
	if (!st.empty()) printf("NO\n");
	else printf("YES\n");

	return 0;
}