#include<stdio.h>
// ���� a ���� �Է¹޾� a>0�̸� a*10���� ����Ͽ� ����ϰ�, �׷��� ������ a*20���� ����Ͽ� ����ϴ� ���α׷�
main() {
	int a, b, c;
	printf("�Է°�=");
	scanf_s("%d", &a);
	if (a >= 0)
		printf("a=%d(��� �Ǵ� 0) -> a * 10 = %d\n", a, a * 10);
	else
		printf("a=%d(����) -> a*20=%d\n", a, a * 20);
}
