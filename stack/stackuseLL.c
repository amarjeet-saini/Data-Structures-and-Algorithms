#include <stdio.h>
#include <cstdlib>

typedef struct node node;

struct node {
	int data;
	node *next;
} *top = NULL;

void push (int val) {
	node *t = (node *)malloc(sizeof(node));
	t->data = val;
	t->next = top;
	top = t;
}

void display () {
	node *temp = top;
	while(temp) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int pop () {
	node *temp = top;
	if (top == NULL) { printf("stack empty\n"); return -1;}
	int x = temp->data;
	if (top->next == NULL) {
		x = temp->data;
		free(temp);
		top = NULL;
	} else {
		top = top->next;
		free(temp);
	}
	return x;
}

int main () {
	push(10);
	push(12);
	push(1);
	push(15);
	display();
	pop();
	pop();
	display();
	pop();
	pop();
	pop();
}
