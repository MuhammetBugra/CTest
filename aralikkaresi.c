#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,karesi;
	printf("deger araliklarini girin:");
	scanf("%d %d",&i,&j);
	if(i>j)
	printf("hatali deger");
	else
	{ n=i;
	  while(n<=j)
	{ if(n%3==0)
	{ karesi=n*n;
	  printf("sayi:%d karesi:%d\n",n,karesi); }
	  n++;
		}	}
	return 0;
}
