#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int top = -1;
char stack[100];

void push(char symbol) {
	stack[++top] = symbol;    
}

char pop() {
	if (top == -1)
	   return -1;
	else
	   return stack[top--];
}

int priority(char symbol) {
	if (symbol == '(') 
	   return 0;
	if (symbol == '+' || symbol == '-') 
	   return 1;
	if (symbol == '*' || symbol == '/') 
	   return 2;
    if (symbol == '^')
        return 3;
	return 0;
}

void main() {
	char tempArray[100];
	char *tempStack, symbol;
	printf("Enter the expression : ");
    scanf("%s",&tempArray);
    printf("\n");
    tempStack = tempArray;
    while (*tempStack != '\0') {
    	if(isalnum(*tempStack))
            printf("%c ",*tempStack);
        else if(*tempStack == '(')
            push(*tempStack);
        else if(*tempStack == ')') {
            while((symbol = pop()) != '(')
                printf("%c ", symbol);
        }
    	else {
		    while (priority(stack[top]) > priority(*tempStack)) {
    		    printf("%c ",pop());
		    }   
	    push(*tempStack);
	    }
	    tempStack++;
	}
	while (top != -1) {
		printf("%c ",pop());
	}
}
