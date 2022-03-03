#include <stdio.h>

int main() {
	char s[31];
	int i, cnt = 0;

	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '(') cnt++;
		else if (s[i] == ')') cnt--;

		if (cnt < 0) break;
	}

	if (cnt == 0) printf("YES\n");
	else printf("NO\n");

	return 0;
}