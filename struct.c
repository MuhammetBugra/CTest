#include <stdio.h>
#include <stdlib.h>
    struct kitapbilgi {
    	char kitapad[20],yazar[20];
    	int fiyat;
    	float puan;
	};
int main() {
	struct kitapbilgi kb={"seker portakali","vasconceulos",10,7.25 };
	printf("kitap ad: %s\n",kb.kitapad);
	printf("yazar: %s\n",kb.yazar);
	printf("fiyat: %d\n",kb.fiyat);
	printf("puan: %.2f",kb.puan);
	return 0;
}
