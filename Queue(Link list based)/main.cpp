#include <iostream>
using namespace std;
#include "queue_linkedlist.h"

int main()
{

	Queue<int>IntQueue;
	IntQueue.isEmpty();
	IntQueue.makeEmpty();
	IntQueue.Dequeue();
	IntQueue.Enqueue(10);
	IntQueue.Enqueue(20);
	IntQueue.Enqueue(30);
	IntQueue.Enqueue(40);
	cout << " " << IntQueue.length() << endl;
	IntQueue.Dequeue();
	cout << " " << IntQueue.length() << endl;

	IntQueue.Print();

	Queue<string>FloatQueue;
	FloatQueue.isEmpty();
	FloatQueue.makeEmpty();
	FloatQueue.Dequeue();
	FloatQueue.Enqueue(" 2 ");
	cout << " " << FloatQueue.length() << endl;
	FloatQueue.Enqueue(" 3 ");
	cout << " " << FloatQueue.length() << endl;
	FloatQueue.Enqueue(" 4 ");
	FloatQueue.Dequeue();
	cout << " " << endl;
	FloatQueue.Print();
	Queue<string> FloatQueue2 = FloatQueue;
	cout << " "<< endl;
	FloatQueue2.Print();
	FloatQueue.makeEmpty();
	cout << " " << endl;
	FloatQueue2.Print();

	return 0;
}
