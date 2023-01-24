#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
struct item {
	int power;
	int coefficient;	
	struct item *next;
};
struct item *insertNode(int power, int coefficient , struct item *head) {
	struct item *polynom;
	polynom=malloc(sizeof(struct item));
	if (polynom == NULL) {
		printf("Memory allocation failed.");
		return head;
	}
	else {
		polynom->power=power;
		polynom->coefficient = coefficient;
		polynom->next = head;
		head = polynom;
		return head;
	}
}
struct item *multiply(struct item *head1, struct item *head2, struct item *head) {
	struct item *ptr1,*ptr2;
	ptr1=head1;
	ptr2=head2;
	int tempCoefficient,tempPower;
	while(ptr1!=NULL) {
		while(ptr2!=NULL) {
			tempCoefficient=ptr1->coefficient*ptr2->coefficient;
			tempPower=ptr1->power+ptr2->power;
			head=insertNode(tempPower,tempCoefficient,head);
			ptr2=ptr2->next;
		}
		ptr2=head2;
		ptr1=ptr1->next;
	}
	return head;
}
struct item *sortPower(struct item *list, struct item *current) {
	struct item *temp;
	if (list == NULL || list->power >= current->power) {
		current->next = list;
		list = current;
	}
	else {
		temp = list;
		while (temp->next != NULL && temp->next->power > current->power) {
			temp = temp->next;
		}
		current->next = temp->next;
		temp->next = current;
	}
	return list;
}
struct item *sortList(struct item *list) {
	struct item *currentNumber, *next, *tempNumber;
	tempNumber = NULL;
	currentNumber = list;
	while (currentNumber != NULL) {
		next=currentNumber->next;
		tempNumber = sortPower(tempNumber, currentNumber);
		currentNumber=next;
	}
	list = tempNumber;
	return list;
}
void printList(struct item *head) {
	while (head != NULL) {
		if(head->power==0)
		    printf("%d + ", head->coefficient);
		else
		    printf("%dx^%d + ", head->coefficient, head->power);
		head = head->next;
	}
}
void main() {
	struct item *head = NULL;
	struct item *head1 = NULL;
	struct item *head2 = NULL;
	head1 = insertNode(7, 1, head1);
    head1 = insertNode(4, 5, head1);
    head1 = insertNode(2, -3, head1);
    head1 = insertNode(0, 4, head1);
    head2 = insertNode(5, 3, head2);
    head2 = insertNode(3, -2, head2);
    head2 = insertNode(2, 1, head2);
    head2 = insertNode(0, 1, head2);
    sortList(head1);
    printList(head1);
    printf("\n");
    sortList(head2);
    printList(head2);
    printf("\n");
    head=multiply(head1,head2,head);
    //sortList(head);
    printList(head);
    printf("\n");
}
