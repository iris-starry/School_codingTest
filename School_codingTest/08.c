#include<stdio.h>
int main() {
	int n = 0; int s= 0;
	do {
		n++;
		s += n;
		n++;
		s -= n;
	} while (n != 100);
	printf("%d\n", s);
}