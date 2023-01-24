#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,sayi;
	int faktoriyel=1;
	printf("sayiyi girin:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{ faktoriyel=faktoriyel*i;
	}
	printf("sonuc: %d",faktoriyel);	
	return 0;
}
