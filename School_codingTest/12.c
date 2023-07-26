#include<stdio.h>
// 정수 a의 값을 입력받아a>0이면 b와 c의 값을 계산하여 출력한 후 d값을 계산하고, 그렇지 않으면 d값만을 계산하는 프로그
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