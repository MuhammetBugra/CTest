#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,boy,kilo;
	printf("boy: ");
	scanf("%lf",&boy);
	printf("kilo: ");
	scanf("%lf",&kilo);
	a=boy/100;
	a=a*a;
	b=kilo/a;
	if(b<18) {
	printf("zayifsiniz. ki: %lf",b); }
	else if(b<25) {
	printf("normalsiniz. ki: %lf",b); }
	else if(b<30) {
	printf("kilolusunuz. ki: %lf",b); }
	else {
	printf("obezite. ki: %lf",b); }
	return 0;
}
