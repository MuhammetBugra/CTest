#include <stdio.h>
#include <stdlib.h>
int main() {
	float n;
	int unvan;
	printf("unvani girin:");
	scanf("%d",&unvan);
	printf("satis adedini girin:");
	scanf("%f",&n);
	switch(unvan)
	{
		case 1:printf("toplam maas: %.2f",(1000,54+250+200*n)); break;
		case 2:printf("toplam maas: %.2f",(1000,54+350+200*n)); break;
		case 3:printf("toplam maas: %.2f",(1000,54+500+200*n)); break;
		case 4:printf("toplam maas: %.2f",(1000,54+750+200*n)); break;
	} 
	return 0;
}
