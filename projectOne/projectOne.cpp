#include <iostream>
#include"clsDbLinkedList.h"
int main()
{
	clsDbLinkedList <int> myDbLinkedList;
	cout << "List Elements: " << endl;
	myDbLinkedList.InsertAtBeganing( 3 );
	myDbLinkedList.InsertAtBeganing( 2 );
	myDbLinkedList.InsertAtBeganing( 1 );
	cout << "List After Adding 500 At The End:" << endl;
	myDbLinkedList.InsertAtEnd( 500 );
	myDbLinkedList.PrintList();
	system( "pause>0" );
}
