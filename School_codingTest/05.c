#include<stdio.h>
int main() {
	int a, b, c, s, n;
	a = 1; b = 1; s = 2; n = 2;
	do {
		c = a + b;
		s = s + c;
		n = n + 1;
		if (n == 5) break;
		a = b;
		b = c;
	} while (n <= 5);
	printf("total= %d�Դϴ�.\n", s);
}

/*
// �Ǻ���ġ ����(while��)
#include<stdio.h>
main(){
	int a=1, b=1, s=a+b;
	int n=2; int c=0;
	printf("�Ǻ���ġ���� = %d",a);
	while(1){
		c=a+b;
		s+=c;
		a=b;
		b=c;
		n++;
		printf("%d",b);
		if(n==10) break;
	}
	printf("\n ��=%d",s);
}
*/