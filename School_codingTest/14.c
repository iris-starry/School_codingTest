#include<stdio.h>
// 1�� ������ �Է��� �� �հ����� �Է��Ͽ� �հ������� �Էµ� ������
// ������ ���հݡ� ������ �����հݡ��� ����ϴ� ���α׷�.
main() {
	int score, pass;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);
	printf("�հ����� �Է��ϼ���: ");
	scanf_s("%d", &pass);
	if (score >= pass)
		printf("�հ�\n");
	else
		printf("���հ�\n");
}