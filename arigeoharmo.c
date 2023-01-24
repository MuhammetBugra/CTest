#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float a,b,aritmetik,geometrik,harmonik;
	printf("sayi 1: ");
	scanf("%f",&a);
	printf("sayi 2: ");
	scanf("%f",&b);
	aritmetik=((a+b)/2);
	geometrik=sqrt(a*b);
	harmonik=(2/((1.0/a)+(1.0/b)));
	printf("aritmetik: %f\n",aritmetik);
	printf("geometrik: %f\n",geometrik);
	printf("harmonik: %f",harmonik);
	return 0;
}
