#include <iostream>
#include <cstdlib>


using namespace std;

typedef struct node node;

struct node {
	int data;
	node *next;
	node *prev;
}*head = NULL;

void create (int a[], int n) {
	node *t, *last;
	head = (node *)malloc(sizeof(node));
	head->data = a[0];
	head->prev = head->next = NULL;
	last= head;

	for (int i=1; i < n; i++) {
		t = (node *)malloc(sizeof(node));
		t->data = a[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
	}
}

void display() {
	node *temp = head;
	while(temp) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}



int main() {
	int a[] = {1,2,4,5,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	create(a,n);
	display();
	return 0;
}
