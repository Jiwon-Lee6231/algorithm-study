#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int top = -1;
int st[1001];

void push(int x) {
	st[++top] = x;
}

int pop() {
	return st[top--];
}

int main() {
	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);

	while (n > 0) {
		// push(n % k);
		s.push(n % k);
		n /= k;
	}

	// while (top != -1) {
	while (!s.empty()) {
		// printf("%c", str[pop()]);
		printf("%c", str[s.top()]);
		s.pop();
	}

	return 0;
}