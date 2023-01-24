#include <stdio.h>
#include <stdlib.h>
int value;
int dizi[100];
int front=-1;
int back=-1;
void addQ(int item) {
	if(back==99) {
		printf("Error: Queue OverFlow\n");
	    return ; }
	dizi[++back]=item;
}
int delQ() {
	if(back==-1) {
		printf("Error: Queue Empty\n"); }
	else if(front==back) 
		front=back-1; 
	else
	return dizi[++front];
}
void print() {
	int i;
	printf("Queue: ");
	for(i=front+1;i<=back;i++) 
	    printf("%d ",dizi[i]);
	printf("\n");
}
void main() {
	addQ(1); print();
	addQ(2); print();
	addQ(3); print();
	delQ(); print();
	addQ(4); print();
	delQ(); print();
	delQ(); print();
}
