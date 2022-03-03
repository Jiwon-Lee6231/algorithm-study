#include <stdio.h>

int main() {
	char num[15];
	int year;

	scanf("%s", num);

	if (num[7] == '1' || num[7] == '2')
		year = 1900 + ((num[0] - 48) * 10) + (num[1] - 48);
	else
		year = 2000 + ((num[0] - 48) * 10) + (num[1] - 48);

	printf("%d ", (2019-year+1));
	if (num[7] == '1' || num[7] == '3')
		printf("M");
	else
		printf("W");

	return 0;
}