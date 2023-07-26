#include<stdio.h>
// 정수 a의 값을 입력받아 a>0이면 b = a*10값을 계산하여 출력하고,
// 그렇지 않으면 c = a*20값을 계산하여 출력하는 프로그램
main() {
	int a, b, c;
	printf("입력값=");
	scanf_s("%d", &a);
	if (a > 0) {
		b = a * 10;
		printf("a가 양수, a=%d -> b = %d\n", a, b);
	}
	else {
		c = a * 20;
		printf("a가 음수, a=%d -> c = %d\n", a, c);
	}
}