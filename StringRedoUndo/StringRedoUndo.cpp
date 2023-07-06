#include <iostream>
#include"clsString.h"
using namespace std;
int main()
{
	clsString S1;
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.setValue( "Muhammed" );
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.setValue( "Muhammed 1" );
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.setValue( "Muhammed 2" );
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.setValue( "Muhammed 3" );
	cout << "S1 value Is: " << S1.getValue() << endl;

	cout << "\n****************\n\n";
	S1.Undo();
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.Undo();
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.Undo();
	cout << "S1 value Is: " << S1.getValue() << endl;

	cout << "\n****************\n\n";
	S1.Redo();
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.Redo();
	cout << "S1 value Is: " << S1.getValue() << endl;
	S1.Redo();
	cout << "S1 value Is: " << S1.getValue() << endl;

	system( "pause>0" );
}
