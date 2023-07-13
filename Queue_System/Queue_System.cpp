#include <iostream>
#include"clsQueueLine.h"
using namespace std;
int main()
{
	clsQueueLine queue( "B0" );
	queue.IssueTicket();
	queue.IssueTicket();
	queue.IssueTicket();
	queue.PrintInfo();
	cout << "\t\t\t\t"; queue.PrintTicketsLineRTL();
	cout << "\n\n";
	cout << "\t\t\t\t"; queue.PrintTicketsLineLTR();
	system( "pause>0" );
}
