#include <stdio.h>

int reverse(int x) {
	int res = 0, tmp = 0;

	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}

	return res;
}

bool isPrime(int x) {
	bool flag = true;

	if (x == 1) return false;

	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}

	return flag;
}

int main() {
	int n, x, tmp;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		
		tmp = reverse(x);
		if (isPrime(tmp)) printf("%d ", tmp);
	}

	return 0;
}