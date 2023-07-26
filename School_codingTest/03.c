#include<stdio.h>
int main() {
	int r = 3; int a = 2;
	int s = a; int n = 2;
	while (1) {
		a = a * r;
		s = s + a;
		s = a;
		n = n + 1;
		if (n > 100) break;
	}
	printf("%d\n", s);
}