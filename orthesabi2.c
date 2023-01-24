#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1,s2,ort;
	printf("birinci sinavi girin: ");
	scanf("%d",&s1);
	printf("ikinci sinavi girin: ");
	scanf("%d",&s2);
	ort=(s1+s2)/2;
	if(ort>=50)
	{ printf("ogrenci gecti: %d",ort);
	}
	else
	{ printf("ogrenci kaldi: %d",ort);
	}
	return 0;
}
