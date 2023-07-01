#include <iostream>
#include"myDynamicList.h"
using namespace std;


int main()
{
	clsMyDynamicList<int> MyArr( 2 );
	MyArr.SetItem( 0 , 1 );
	MyArr.SetItem( 1 , 2 );
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
	system( "pause>0" );
}