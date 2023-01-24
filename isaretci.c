#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi1=10,sayi2=20;
	printf("sayi: %d --- bellek: %x\n",sayi1,&sayi1);
	printf("sayi: %d --- bellek: %x\n",sayi2,&sayi2);
	int *s=&sayi1;
	printf("sayi: %d --- bellek: %x\n",sayi1,s);
	s++;
	printf("sayi: %d --- bellek2: %x",sayi1,s);
	return 0;
}
