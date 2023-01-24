#include <stdio.h>
#include <stdlib.h>
int A[100];
int top=-1;
void push(int item) {
	if(top==99) {
		printf("Error: Stack OverFlow\n");
	    return ; }
	A[++top]=item;
}
void pop() {
	if(top==-1) {
		printf("Error: no Elment to pop\n");
		return ; }
	top--;
}
int Top() {
	return A[top]; }
void print() {
	int i;
	printf("Stack: ");
	for(i=0;i<=top;i++) 
	    printf("%d ",A[i]);
	printf("\n");
}
void main() {
	push(2); print();
	push(5); print();
	push(10); print();
	pop(); print();
	push(12); print();
	printf("%d\n",Top());
	print();
}
