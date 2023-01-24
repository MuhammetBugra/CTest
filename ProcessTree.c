#include <stdio.h>
#include <stdlib.h>
struct treeNode {
    char data;
    struct treeNode* leftptr;
    struct treeNode* rightptr;
};
struct treeNode* newNode(int data) {
    struct treeNode* treeNode = (struct treeNode*) malloc(sizeof(struct treeNode));
    treeNode->data = data;
    treeNode->leftptr = NULL;
    treeNode->rightptr = NULL;
    return(treeNode);
}
void inorder(struct treeNode *p) {
    if (p != NULL) {
	    inorder(p->leftptr);
	    if(p->data=='*' || p->data=='/') {
    		printf(") ");
		}
        printf("%c ",p->data);
        if(p->data=='*' || p->data=='/') {
    		printf("( ");
		}
        inorder(p->rightptr);
    }
}
void preorder(struct treeNode *p) {
    if (p != NULL) {
        printf("%c ",p->data);	
	    preorder(p->leftptr);
        preorder(p->rightptr);
    }
}
void postorder(struct treeNode *p) {
    if (p != NULL) {	
	    postorder(p->leftptr);
        postorder(p->rightptr);
        printf("%c ",p->data);
    }
}
void main() {
	struct treeNode *root = newNode('*');
    root->leftptr = newNode('+');
    root->rightptr = newNode('-');
    root->leftptr->leftptr = newNode('5');
    root->leftptr->rightptr = newNode('8');
    root->rightptr->leftptr = newNode('7');
    root->rightptr->rightptr = newNode('1');
    printf("( ");
    inorder(root);
    printf(") ");
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
}
