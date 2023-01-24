#include <stdio.h>
#include <stdlib.h>
int f(int a, int b) {
	if(b<2) {
	return a; }
	return a+f(a,b-1);
}
int main() {
	int a,b,sonuc;
	printf("sayilar: ");
	scanf("%d%d",&a,&b);	
	sonuc=f(a,b);
	printf("sonuc: %d",sonuc);
	return 0;
}
