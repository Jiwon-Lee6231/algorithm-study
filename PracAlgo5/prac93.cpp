#include <iostream>

using namespace std;

int dy[101];

int dfs(int n) {
	if (dy[n] > 0) return dy[n];

	if (n == 1 || n == 2) return n;
	else return dy[n] = dfs(n - 1) + dfs(n - 2);
}

int main() {
	int n;

	cin >> n;

	cout << dfs(n);

	return 0;
}