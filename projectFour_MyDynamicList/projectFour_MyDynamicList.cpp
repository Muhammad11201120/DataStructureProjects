#include <iostream>
#include"myDynamicList.h"
using namespace std;


int main()
{
	clsMyDynamicList<int> MyArr( 5 );
	MyArr.SetItem( 0 , 1 );
	MyArr.SetItem( 1 , 2 );
	MyArr.SetItem( 2 , 3 );
	MyArr.SetItem( 3 , 4 );
	MyArr.SetItem( 4 , 5 );
	MyArr.Print();
	cout << "\nthe size is: " << MyArr.Size() << endl;
	if ( MyArr.IsEmpty() )
	{
		cout << "it is empty.." << endl;
	}
	else
	{
		cout << "it is not empty.." << endl;
	}
	cout << MyArr.GetItem( 1 ) << endl;

	MyArr.Reverse();
	MyArr.Print();
	cout << "\n";

	MyArr.Print();
	cout << "\n";

	MyArr.Delete( 2 );
	MyArr.Print();
	cout << "\n";
	MyArr.DeleteItem( 2 );
	MyArr.Print();
	system( "pause>0" );
}