#include<stdio.h>
// 정수 a의 값을 입력받아 a > 0이면 항상 “양수"를 출력하는 프로그램
main() {
	int a;
	printf("입력된값 = ");
	scanf_s("%d", &a);
	if (a > 0)
		printf("양수\n");
}