#include<stdio.h>
// �ΰ����� ������ ���ÿ� 60���� �Ѿ�� �հ��ϴ� ���α׷�. 
main() {
	int kor, mat;
	printf("���������� �Է��ϼ���: ");
	scanf_s("%d", &kor);
	printf("���������� �Է��ϼ���: ");
	scanf_s("%d", &mat);
	if((kor >= 60) && (mat >= 60))
		printf("�հ�\n");
	else
		printf("���հ�\n");
}