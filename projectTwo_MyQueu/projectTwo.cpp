#include <iostream>
#include "MyQueue.h"

using namespace std;

int main()
{

	clsMyQueue <int> MyQueue;

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





	system( "pause>0" );

}