#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi1,sayi2,sonuc,islem;
	printf("1.sayi:");
	scanf("%d",&sayi1);
	printf("2.sayi:");
	scanf("%d",&sayi2);
	printf("islemi girin:");
	scanf("%d",&islem);
	switch(islem)
	{ case 1: printf("sonuc: %d",sayi1+sayi2); break;
	  case 2: printf("sonuc: %d",sayi1-sayi2); break;
	  case 3: printf("sonuc: %d",sayi1*sayi2); break;
	  case 4: printf("sonuc: %d",sayi1/sayi2);
	}
	return 0;
}
