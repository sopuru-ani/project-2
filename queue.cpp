#include <iostream>
#include "queue.h"
using namespace std;

Queue::Queue() {
	//num = 0;
	frontPtr = nullptr;
	rearPtr = nullptr;
}
bool Queue::isEmpty() {
	//if (!head);
	if (!frontPtr || !rearPtr) {
		return true;
	}return false;
}
void Queue::enqueue(int n) {
	QueueNode* newNode = nullptr;
	newNode = new QueueNode;
	newNode->num = n;
	newNode->next = nullptr;

	if (isEmpty()) {
		frontPtr = newNode;
		rearPtr = newNode;
	}
	else {
		rearPtr->next = newNode;
		newNode->next = nullptr;
		rearPtr = newNode;
	}
}

void Queue::displayList() {
	QueueNode* nodePtr;
	nodePtr = frontPtr;

	while (nodePtr) {
		cout << nodePtr->num;
		nodePtr = nodePtr->next;
	}
}
Queue::~Queue() {

}