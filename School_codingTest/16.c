#include<stdio.h>
// 두과목의 점수가 동시에 60점이 넘어야 합격하는 프로그램. 
main() {
	int kor, mat;
	printf("국어점수를 입력하세요: ");
	scanf_s("%d", &kor);
	printf("수학점수를 입력하세요: ");
	scanf_s("%d", &mat);
	if((kor >= 60) && (mat >= 60))
		printf("합격\n");
	else
		printf("불합격\n");
}