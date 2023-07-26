#include<stdio.h>
// 정수 a의 값을 입력받아 a>0이면 "1번 줄"과 "2번 줄"과 "3번 줄"을 출력하고 0이거나
// 음수이면 "2번 줄"과 "3번 줄"를 출력하는 프로그램
main() {
	int a;
	printf("입력 값= ");
	scanf_s("%d", &a);
	if (a > 0)
		printf("1번줄\n");
	printf("2번줄\n");
	printf("3번줄\n");
}