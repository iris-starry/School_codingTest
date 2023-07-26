#include<stdio.h>
int main() {
	int sum = 0; int n = 1; // ÃÊ±âÈ­
	do {
		sum = sum + n;
		n = n + 1;
		if (n > 100) break;
	} while (n <= 100); // n=1
	printf("%d\n", sum);
}
/*
#include<stdio.h>
main(){
   int sum = 0; int n = 1;
   while(1){
	   sum = sum + n;
	   n = n + 1;
	   if(n>100) break;
   }
   printf("%d\n",sum);
}
 */