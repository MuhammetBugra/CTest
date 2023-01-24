#include <stdio.h>
#include <stdlib.h>
int fonksiyon(int *a,int *b) {
	int c;
	c=*a;
	*a=*b;
	*b=c;
	return 0;
}
int main() {
	int a=5,b=10;
	fonksiyon(&a,&b);
	printf("a: %d\nb: %d",a,b);
	return 0;
}
