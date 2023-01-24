#include <stdio.h>
#include <stdlib.h>
int main() {
	int x;
	printf("sayiyi girin: ");
	scanf("%d",&x);
	if(x%5==0 && x%3==0)
	{ printf("x 3'e ve 5'e bolunur");
	}
	else
	{ printf("x 3'e ve 5'e tam bolunmez");
	}
	return 0;
}
