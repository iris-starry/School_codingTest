#include<stdio.h>
// 1개 점수를 입력한 뒤 합격점을 입력하여 합격점보다 입력된 점수가
// 높으면 ‘합격’ 낮으면 ‘불합격’을 출력하는 프로그램.
main() {
	int score, pass;
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);
	printf("합격점을 입력하세요: ");
	scanf_s("%d", &pass);
	if (score >= pass)
		printf("합격\n");
	else
		printf("불합격\n");
}