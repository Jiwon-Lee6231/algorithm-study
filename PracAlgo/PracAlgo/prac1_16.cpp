#include <stdio.h>

int main() {
	char c1[60], c2[60];
	char str[101];

	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			c1[str[i] - 64]++;
		else
			c1[str[i] - 70]++;
	}

	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			c2[str[i] - 64]++;
		else
			c2[str[i] - 70]++;
	}

	for (int i = 0; i <= 52; i++) {
		if (c1[i] != c2[i]) {
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");
	return 0;
}