#include <stdio.h>
#include <stdlib.h>
int main() {
	int o,y,b,i,toplam=0;
	for(i=1;i<=999;i++) {
	y=i/100;
	o=(i-y*100)/10;
	b=(i-y*100-o*10);
	toplam=o*o*o+y*y*y+b*b*b;
	if(toplam==i) {
	printf("%d ",i); } }
	return 0;
}
