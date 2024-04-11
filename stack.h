#ifndef stack_h
#define stack_h
using namespace std;

class Stack {
private:
	struct StackNode {
		int num;
		StackNode* next;
	};
	StackNode* top;
public:
	Stack();
	void push(int);
	bool isEmpty();
	void displayStack();
	~Stack();
};

#endif