#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayilar[]={10,20,30,40};
	int toplam=0;
	int i;
	for(i=0;i<4;i++)
	{ toplam=toplam+sayilar[i]; }
	printf("%d",toplam);
	return 0;
}
