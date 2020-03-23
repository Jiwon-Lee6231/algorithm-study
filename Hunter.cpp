#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	int *a = new int[T];
	int *b = new int[T];
	int *cash = new int[T];

	// 1��, 2���� ���� ���� �Է¹ޱ�
	for (int i = 0; i < T; i++) {
		cin >> a[i] >> b[i];
		cash[i] = 0;
	}

	// 1�� �ڵ� �佺Ƽ������ ���� �� ��� �ο��ϱ�
	for (int i = 0; i < T; i++) {
		if (a[i] == 1) cash[i] += 5000000;
		else if (a[i] <= 3) cash[i] += 3000000;
		else if (a[i] <= 6) cash[i] += 2000000;
		else if (a[i] <= 10) cash[i] += 500000;
		else if (a[i] <= 15) cash[i] += 300000;
		else if (a[i] <= 21) cash[i] += 100000;
		else cash[i] += 0;
	}

	// 2�� �ڵ� �佺Ƽ������ ���� �� ��� �ο��ϱ�
	for (int i = 0; i < T; i++) {
		if (b[i] == 1) cash[i] += 5120000;
		else if (b[i] <= 3) cash[i] += 2560000;
		else if (b[i] <= 7) cash[i] += 1280000;
		else if (b[i] <= 15) cash[i] += 640000;
		else if (b[i] <= 31) cash[i] += 320000;
		else cash[i] += 0;
	}

	for (int i = 0; i < T; i++) {
		cout << cash[i] << endl;
	}
	
	return 0;
}