#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	a=5;
	b=++a;
	c=a++;
	printf("%d\n%d\n%d",b,c,a);
	return 0;
}
