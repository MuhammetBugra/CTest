#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

void reverse(char *array) {
	char temp[strlen(array)];
	int j = strlen(array), i = 0;
	temp[j--] = '\0';
	while (array[i] != '\0') {
		if (array[i] == ')') 
		    array[i] = '(';
		else if (array[i] == '(') 
		    array[i] = ')';
		temp[j] = array[i];
		j--;
		i++;
	}
	strcpy(array,temp);
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
	char tempArray[100], output[100];
	char *tempStack, symbol;
	int i = -1;
	printf("Enter the expression : ");
    scanf("%s",&tempArray);
    printf("\n");
    reverse(tempArray);
    tempStack = tempArray;
    while (*tempStack != '\0') {
    	if(isalnum(*tempStack))
            output[++i] = *tempStack;
        else if(*tempStack == '(')
            push(*tempStack);
        else if(*tempStack == ')') {
            while((symbol = pop()) != '(')
                output[++i] = symbol;
        }
    	else {
		    while (priority(stack[top]) > priority(*tempStack))
    		    output[++i] = pop();  
	    push(*tempStack);
	    }
	    tempStack++;
	}
	while (top != -1)
		output[++i] = pop();
	reverse(output);
	for (int j = 0; j < strlen(output); j++)
	    printf("%c ", output[j]);
}
