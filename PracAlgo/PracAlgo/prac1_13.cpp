#include <stdio.h>

int ch[10];

int main() {
	char c[101];
	int digit, res, max=-2147000000;

	scanf("%s", &c);
	for (int i = 0; c[i] != '\0'; i++) {
		digit = c[i] - 48;
		ch[digit]++;
	}

	for (int i = 0; i <= 9; i++) {
		if (ch[i] >= max) {
			max = ch[i];
			res = i;
		}
	}

	printf("%d\n", res);

	return 0;
}