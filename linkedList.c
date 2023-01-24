#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define NULL -1
typedef struct {
    char name[5];
    int link;
}item;
item linkedList[10];
int free_;
int first;
void makeEmptyList(void) {
	for(int i=0;i<9;i++) {
		linkedList[i].link=i+1;
	}
	linkedList[9].link=NULL;
	free_=0;
	first=NULL;
}
int getItem(int *r) {
	if(free_==NULL) {
		return FALSE;
	}
	else {
		*r=free_;
		free_=linkedList[free_].link;
		return TRUE;
	}
}
void returnItem(int r) {
	linkedList[r].link=free_;
	free_=r;
}
void insertItem(char name[],int *list) {
	int r,q,p;
	if (getItem(&r)) {
		strcpy(linkedList[r].name,name);
		q=NULL;
		p=*list;
		while(p!=NULL && strcmp(linkedList[p].name,name)<0) {
			q=p;
			p=linkedList[r].link=p;
		}
		if(q==NULL) {
			*list=r;
			linkedList[r].link=p;
		}
		else {
			linkedList[q].link=r;
			linkedList[r].link=p;
		}
	}
	else {
		printf("\n not enough free space!!");
	}
}
void deleteItem(char name[],int *list) {
	int q,p;
	q=NULL;
	p=*list;
	int l;
	while(p!=NULL && (l=strcmp(linkedList[p].name,name))<0) {
		q=p;
		p=linkedList[p].link;
	}
	if(p==NULL || l>0) {
		printf("\n %s cannot be found!!",name);
	}
	else if(q==NULL) {
		*list=linkedList[p].link;
		returnItem(p);
	}
}
void main() {
	
}
