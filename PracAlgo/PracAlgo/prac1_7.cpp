#include <stdio.h>

int main() {
	char s[101], r[101];
	int i, posit = 0;

	gets_s(s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ') {
			if (s[i] >= 65 && s[i] <= 90)
				r[posit++] = s[i] + 32;
			else
				r[posit++] = s[i];
			
		}
	}

	r[posit] = '\0';

	printf("%s", r);

	return 0;
}

// bE    au T I fu     L