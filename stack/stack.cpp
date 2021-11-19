#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node *nxt;
};

class Stack {
	private:
		Node* top;	
	public:
		Stack() {
			top = NULL;
		}
		void push(int);
		int pop();
		void display();
		bool isEmpty();
		~Stack() {

		}
};

void Stack::push (int value) {
	Node *temp = new Node;
	if (temp == NULL) {
		cout<<"stack full\n";
		return;
	}
	temp->data = value;
	temp->nxt = top;
	top = temp;
}

int Stack::pop() {
	if(top == NULL) {
		cout<<"stack empty\n";
		return -1;
	}
	Node *temp = top;
	int x = temp->data;
	top = top->nxt;
	delete temp;
	return x;
}

bool Stack::isEmpty () {
	return top == NULL;
}

void Stack::display() {
	Node *temp = top;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->nxt;
	}
	cout<<endl;
}


int main () {
	Stack S;
	S.push(10);
	S.push(13);
	S.push(11);
	//cout << (bool)S.isEmpty();
	S.display();
	S.pop();
	S.pop();
	S.display();
	return 0;
}

