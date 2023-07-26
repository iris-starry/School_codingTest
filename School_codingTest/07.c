#include<stdio.h>
int main() {
	int j = 0; int k = 1; //변수초기화
	do {
		j = j + 1; //j의 값을 1씩 누적
		k = k * j; //k*j의 값을 k에 저장 
	} while (j < 5);
	printf("%d번째 팩토리얼 = %d", j, k);
}


/*
// 1부터 100까지의 누승의 합 S = 1! + 2! + 3! + 4! + 5! + ... + 100!을 구하여 출력하는 알고리즘을 제시하라
// (단 N!은 자연수에 대한 누승(Factorial)으로서 처음부터 까지의 곱을말한다).
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
