#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack() {

}

bool Stack::isEmpty() {
	if (!top) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int n) {
	StackNode* newNode = nullptr;
	newNode = new StackNode;
	newNode->num = n;
	

	if (isEmpty()) {
		top = newNode;
		newNode->next = nullptr;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
}

void Stack::displayStack() {
	StackNode* current = top;
	while (current) {
		cout << current->num;
		current = current->next;
	}
}

Stack::~Stack() {

}