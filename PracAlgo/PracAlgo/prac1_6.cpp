#include <stdio.h>

int main() {
	char s[100];
	int i, num = 0, cnt = 0;

	scanf("%s", s);
	// �ڿ���
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 48 && s[i] <= 57) {
			num = num * 10 + (s[i] - 48);	// * 10�� 10�� �ڸ��� �÷��ֱ� ����
		}
	}

	// ���
	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			cnt++;
	}

	printf("%d\n", num);
	printf("%d\n", cnt);
		
	return 0;
}