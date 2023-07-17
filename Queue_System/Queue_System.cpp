#include <iostream>
#include"clsQueueLine.h"
using namespace std;
int main()
{
	clsQueueLine queue( "B0" , 5 );
	queue.IssueTicket();
	queue.IssueTicket();
	queue.IssueTicket();
	queue.PrintInfo();
	cout << "\t\t\tQueue From Right To Left: \n\n";
	cout << "\t\t\t"; queue.PrintTicketsLineRTL();
	cout << "\n\n";
	queue.PrintAllTickets();
	system( "pause>0" );
}
