#include<stdio.h>
// 정수 a 값을 입력받아 a>0이면 a*10값을 계산하여 출력하고, 그렇지 않으면 a*20값을 계산하여 출력하는 프로그램
main() {
	int a, b, c;
	printf("입력값=");
	scanf_s("%d", &a);
	if (a >= 0)
		printf("a=%d(양수 또는 0) -> a * 10 = %d\n", a, a * 10);
	else
		printf("a=%d(음수) -> a*20=%d\n", a, a * 20);
}
