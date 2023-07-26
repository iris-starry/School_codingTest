#include<stdio.h>
int main() {
	int n, i, j;
	printf("소인수 분해 할 데이터=");
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			printf("%d\n", i);
			n = n / i;
		}
	}
}