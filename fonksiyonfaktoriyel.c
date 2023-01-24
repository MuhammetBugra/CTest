#include <stdio.h>
#include <stdlib.h>
int f(int i,int n)
    { int f=1;
    for(i=1;i<=n;i++)
   { f*=i; }
    return f; }
int main() {
	int n,i;
	scanf("%d",&n);
	printf("sonuc: %d",f(i,n));
	return 0;
}
