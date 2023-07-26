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
	printf("total= %d입니다.\n", s);
}

/*
// 피보나치 수열(while문)
#include<stdio.h>
main(){
	int a=1, b=1, s=a+b;
	int n=2; int c=0;
	printf("피보나치수열 = %d",a);
	while(1){
		c=a+b;
		s+=c;
		a=b;
		b=c;
		n++;
		printf("%d",b);
		if(n==10) break;
	}
	printf("\n 합=%d",s);
}
*/