#include<stdio.h>
main() {
	int k = 0; double s = 0;
	int sw = 0; double l = 0;
	do {
		k++;
		l = (double)k / ((k + 1) * (k + 2));
		if (sw == 0) {
			s += l;
			sw = 1;
		}
		else {
			s -= l;
			sw = 0;
		}
	} while (k != 49);
	printf("%f\n", s);
}