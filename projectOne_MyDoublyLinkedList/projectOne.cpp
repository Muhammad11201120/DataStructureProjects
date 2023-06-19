#include <iostream>
#include"clsDbLinkedList.h"
int main()
{
	clsDbLinkedList <int> MydblLinkedList;

	MydblLinkedList.InsertAtBeganing( 5 );
	MydblLinkedList.InsertAtBeganing( 4 );
	MydblLinkedList.InsertAtBeganing( 3 );
	MydblLinkedList.InsertAtBeganing( 2 );
	MydblLinkedList.InsertAtBeganing( 1 );

	cout << "\nLinked List Contenet:\n";
	MydblLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N1 = MydblLinkedList.Find( 2 );

	if ( N1 != NULL )
		cout << "\nNode with value 2 is Found :-)\n";
	else
		cout << "\nNode Is not found :-(\n";

	MydblLinkedList.InsertAfter( N1 , 500 );
	cout << "\nAfter Inserting 500 after 2:\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.InsertAtEnd( 700 );
	cout << "\nAfter Inserting 700 at end:\n";
	MydblLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N2 = MydblLinkedList.Find( 4 );
	MydblLinkedList.DeleteNode( N2 );
	cout << "\nAfter Deleting 4:\n";
	MydblLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N3 = MydblLinkedList.GetNode( 2 );
	if ( N3 != NULL )
	{
		cout << "\nThe Value Of Index 2 Of The List Is: " << N3->value << endl;
	}
	else
	{
		cout << "No Node With that Index.." << endl;
	}

	MydblLinkedList.Reverse();
	cout << "List After Reversing Elements: " << endl;
	MydblLinkedList.PrintList();

	MydblLinkedList.DeleteFirstNode();
	cout << "\nAfter Deleting First Node:\n";
	MydblLinkedList.PrintList();

	cout << "\nAfter Deleting Last Node:\n";
	MydblLinkedList.DeleteLastNode();
	MydblLinkedList.PrintList();
	system( "pause>0" );
}
