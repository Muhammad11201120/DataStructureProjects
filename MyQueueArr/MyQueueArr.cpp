#include <iostream>
#include"clsMyQueueArr.h"
using namespace std;
int main()
{
	clsMyQueueArr <int> MyQueue;

	MyQueue.Push( 10 );
	MyQueue.Push( 20 );
	MyQueue.Push( 30 );
	MyQueue.Push( 40 );
	MyQueue.Push( 50 );


	cout << "\nQueue: \n";
	MyQueue.Print();

	cout << "\nQueue Size: " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.Front();
	cout << "\nQueue Back: " << MyQueue.Back();

	MyQueue.Pop();

	cout << "\n\nQueue after pop() : \n";
	MyQueue.Print();

	cout << "\n\nValue is : " << MyQueue.GetItem( 1 );
	cout << "\n\nList After Adding 1000 to Front: " << endl;
	MyQueue.InsertAtFront( 1000 );
	MyQueue.Print();

	cout << "\n\nList After Adding 500 To The Back: " << endl;
	MyQueue.InsertAtBack( 500 );
	MyQueue.Print();

	cout << "\n\nReversing The List: " << endl;
	MyQueue.Revers();
	MyQueue.Print();

	cout << "Clearing the List: " << endl;
	MyQueue.Clear();
	MyQueue.Print();


	system( "pause>0" );
}
