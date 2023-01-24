#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,toplam;
	toplam=0;
	for(n=1;n<=10;n++) 
	{ if(n==5) { continue; } 
	toplam+=n; }
	printf("sonuc:%d",toplam);	
	return 0;
}
