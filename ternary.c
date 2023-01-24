#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi1=5,sayi2=8;
	int toplam=((sayi1 >= sayi2)? sayi1-sayi2: sayi2-sayi1);
	printf("sonuc:%d",toplam);
	return 0;
}
