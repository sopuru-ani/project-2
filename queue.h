#ifndef queue_h
#define queue_h
using namespace std;

class Queue {
private:
	struct QueueNode {
		int num;
		QueueNode* next;
	};
	QueueNode* frontPtr;
	QueueNode* rearPtr;
public:
	Queue();
	void enqueue(int);
	bool isEmpty();
	void displayList();
	~Queue();
};

#endif