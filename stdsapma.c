#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float a,b,aritmetik,varyans,sapma;
	printf("sayi 1: ");
	scanf("%f",&a);
	printf("sayi 2: ");
	scanf("%f",&b);
	aritmetik=(a+b)/2;
	if(a<aritmetik) { 
	varyans=aritmetik-a; }
	else {
	varyans=a-aritmetik; }
	if(b<aritmetik) { 
	varyans=varyans+(aritmetik-b); }
	else {
	varyans=varyans+(b-aritmetik); }
	sapma=sqrt(varyans/2);
	printf("aritmetik: %f\n",aritmetik);
	printf("varyans: %f\n",varyans/2);
	printf("sapma: %f\n",sapma);
	return 0;
}
