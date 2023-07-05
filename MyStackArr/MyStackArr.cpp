#include <iostream>
#include"clsMyStackArr.h"
using namespace std;
int main()
{
	clsMyStackArr<int> myStack;
	myStack.Push( 10 );
	myStack.Push( 20 );
	myStack.Push( 30 );
	myStack.Push( 40 );
	myStack.Push( 50 );

	cout << "\nList is : ";  myStack.Print();
	cout << "\n\nStack Top is: " << myStack.Top();
	cout << "\n\nStack Bottom is: " << myStack.Bottom();
	system( "pause>0" );
}
