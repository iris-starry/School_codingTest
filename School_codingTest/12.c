#include<stdio.h>
// ���� a�� ���� �Է¹޾�a>0�̸� b�� c�� ���� ����Ͽ� ����� �� d���� ����ϰ�, �׷��� ������ d������ ����ϴ� ���α�
main() {
	int a, b, c, d;
	printf("Input data=");
	scanf_s("%d", &a);
	if (a > 0) {
		b = a + 10;
		c = a + a * b;
		printf("a=%d b=%d c=%d", a, b, c);
	}
	d = a - 20;
}