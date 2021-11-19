/*
* stack implementation using array
*/


#include <stdio.h>
#include <cstdlib>

typedef struct stack stack;

void push (stack *st, int value);
void display (stack st);
void pop (stack *st);
int isFull (stack *st);
int isEmpty (stack *st);


struct stack {
	int top;
	int size;
	int *S;
};

void push (stack *st, int value) {
	if (isFull(st)) {
		printf("stack full\n");
		return;
	}

	st->S[++(st->top)] = value;
}

void display (stack st) {
	for (int i=0; i <= st.top; ++i) {
		printf("%d %d\n", i, st.S[i]);
	}
	printf("\n");
}

void pop (stack *st) {
	if (isEmpty(st)) {
		printf("stack empty\n");
		return;
	}
	(st->top)--;
}

int isFull (stack *st) {
	if(st->top == st->size-1) return 1;
	else return 0;
}

int isEmpty (stack *st) {
	if(st->top == -1) return 1;
	else return 0;
}



int main() {
	stack st;
	//printf("enter stack size\n");
	scanf("%d", &(st.size));
	st.S = (int *)malloc(sizeof(int)*st.size);
	st.top = -1;
	push(&st, 10);
	push(&st, 110);
	push(&st, 120);
	push(&st, 30);
	push(&st, 0);
	display(st);
	pop(&st);
	pop(&st);
	pop(&st);
	display(st);
}
