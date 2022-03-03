#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

stack<int> st;

// 전위 : 1 2 4 5 3 6 7
void d1(int x) {
	if (x > 7) {
		return;
	}
	printf("%d ", x);
	d1(x * 2);
	d1(x * 2 + 1);
}

// 후위 : 4 5 2 6 7 3 1
void d2(int x) {
	if (x > 7) {
		return;
	}
	d2(x * 2);
	d2(x * 2 + 1);

	printf("%d ", x);
}

// 중위 : 4 2 5 1 6 3 7
void d3(int x) {
	if (x > 7) {
		return;
	}
	d3(x * 2);
	printf("%d ", x);
	d3(x * 2 + 1);
}

int main() {
	d3(1);

	return 0;
}