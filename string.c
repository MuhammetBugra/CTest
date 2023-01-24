#include <stdio.h>
#include <stdlib.h>
int main() {
	char kitap[20],kopya[20]="",kopya1[20]="",kitapyazar[40],yazar[20];
	printf("ad-yazar: ");
	scanf("%s%s",kitap,yazar);
	printf("\n%10s",kitap);
	printf("\n%10.3s",kitap);
	printf("\n%-20s",kitap);
	printf("\nkatar uzunlugu: %d",strlen(kitap));
	strcpy(kopya,kitap);
	printf("\nkopya: %s",kopya);
	strncpy(kopya1,kitap,5);
	printf("\nkopya: %s",kopya1);
	strcat(kitapyazar,kitap);
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	printf("\nkitapyazar: %s",kitapyazar);
	return 0;
}
