#include<stdio.h>
int main() {
	int j = 0; int k = 1; //�����ʱ�ȭ
	do {
		j = j + 1; //j�� ���� 1�� ����
		k = k * j; //k*j�� ���� k�� ���� 
	} while (j < 5);
	printf("%d��° ���丮�� = %d", j, k);
}


/*
// 1���� 100������ ������ �� S = 1! + 2! + 3! + 4! + 5! + ... + 100!�� ���Ͽ� ����ϴ� �˰����� �����϶�
// (�� N!�� �ڿ����� ���� ����(Factorial)���μ� ó������ ������ �������Ѵ�).
#include<stdio.h>
main(){
	int n = 1; int f = 1; int s =1;
	while(1){
		n++;
		f=f*n;
		s+=f;
		if(n==5) break;
	}
	printf("%d\n",s);
}
*/
