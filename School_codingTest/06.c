#include<stdio.h>
int main() {
	int n, i, j;
	printf("���μ� ���� �� ������=");
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			printf("%d\n", i);
			n = n / i;
		}
	}
}