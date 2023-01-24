#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    struct bilgi {
	int n;
	struct bilgi *a; };
	struct bilgi *sayi() {
    struct bilgi *b=malloc(sizeof(struct bilgi));
    b->n=rand()%100;
    b->a=NULL;
    return b; }
int main() {
	struct bilgi *m, *l;
	srand(time(NULL));
	int i,k;
	printf("sayi girin:");
	scanf("%d",&k);
	m=sayi();
	l=m;
	printf("siralama:\n");
	for (i=1;i<k;i++) {
	l->a=sayi(l);
	l=l->a; }
	i=0;
	printf("sayilar:\n");
	struct bilgi *tmp=m;
	while(tmp!=NULL) {
	printf("%p --> %p : l[%d] : %d -- %d\n",tmp,tmp->a,i,tmp->n,l[i]); 
	tmp=tmp->a;
	i++; }
	printf("\n");
}
