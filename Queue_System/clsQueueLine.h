#pragma once
#include<iostream>
#include<queue>
#include<stack>
#include"clsDate.h"
using namespace std;

class clsQueueLine
{
private:
	short _totalTikets = 0;
	short _averagTimeToServe = 0;
	string _prefix = "";

	class clsTickets
	{
	private:
		short _clientNumber = 0;
		short _waitingClients = 0;
		short _averageTimeToServe = 0;
		short _excpectedTimeToServe = 0;
		string _ticketTime = "";
		string _prefix = "";
	public:
		clsTickets( string prefix , short clientNumber , short waitingClients , short averageTimeToServe )
		{
			this->_clientNumber = clientNumber;
			this->_prefix = prefix;
			this->_averageTimeToServe = averageTimeToServe;
			this->_waitingClients = waitingClients;
			this->_ticketTime = clsDate::GetSystemDateTimeString();
		}
		string Prefix()
		{
			return this->_prefix;
		}
		short ClientNumber()
		{
			return this->_clientNumber;
		}
		string ClientFullNumber()
		{
			return this->_prefix + to_string( this->_clientNumber );
		}
		short WaitingClients()
		{
			return this->_waitingClients;
		}
		short AverageTimeToServe()
		{
			return this->_averageTimeToServe;
		}
		short ExcpectedTimeToServe()
		{
			return this->_averageTimeToServe * WaitingClients();
		}
		string TicketTime()
		{
			return this->_ticketTime;
		}
		void Print()
		{
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << ClientFullNumber();
			cout << "\n\n\t\t\t    " << TicketTime();
			cout << "\n\t\t\t    Wating Clients = " << WaitingClients();
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExcpectedTimeToServe() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";
		}
	};


public:
	queue<clsTickets> queueLine;
	clsQueueLine( string prefix , int averageTimeToServe )
	{
		this->_prefix = prefix;
		this->_averagTimeToServe = averageTimeToServe;
		this->_totalTikets = 0;
	}
	void IssueTicket()
	{
		this->_totalTikets++;
		clsTickets Ticket( this->_prefix , this->_totalTikets , WaitingClients() , this->_averagTimeToServe );
		queueLine.push( Ticket );

	}

	int WaitingClients()
	{
		return this->_totalTikets;

	}


	string WhoIsNext()
	{
		if ( queueLine.empty() )
		{
			return "NO CLIENTS..";
		}
		return queueLine.front().ClientFullNumber();
	}

	bool ServeNextClient()
	{
		if ( queueLine.empty() )
		{
			return false;
		}
		queueLine.pop();
		return true;

	}

	short ServedClients()
	{
		return this->_totalTikets - this->WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _totalTikets;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";

	}

	void PrintTicketsLineRTL()
	{

		if ( queueLine.empty() )
		{
			cout << "CLIENTS: NO CLIENT.." << endl;
		}
		else
			cout << "TICKETS: ";
		queue<clsTickets> TempTickets = queueLine;
		while ( !TempTickets.empty() )
		{
			clsTickets Ticket = TempTickets.front();
			cout << Ticket.ClientFullNumber() << " >> ";
			TempTickets.pop();
		}
		cout << "\n";
	}

	void PrintTicketsLineLTR()
	{
		if ( queueLine.empty() )
		{
			cout << "CLIENTS: NO CLIENT.." << endl;
		}
		else
			cout << "TICKETS: ";
		queue<clsTickets> TempTickets = queueLine;
		stack<clsTickets> TempStckTicket;
		while ( !TempTickets.empty() )
		{
			TempStckTicket.push( TempTickets.front() );
			TempTickets.pop();
		}
		while ( !TempStckTicket.empty() )
		{
			clsTickets Ticket = TempStckTicket.top();
			cout << Ticket.ClientFullNumber() << " << ";
			TempStckTicket.pop();
		}
		cout << "\n";
	}


	void PrintAllTickets()
	{
		if ( queueLine.empty() )
		{
			cout << "CLIENTS: NO CLIENT.." << endl;
		}
		else
			cout << "\t\t\t\tTICKETS: ";
		queue<clsTickets> TempTickets = queueLine;
		while ( !TempTickets.empty() )
		{
			TempTickets.front().Print();
			TempTickets.pop();
		}
		cout << "\n";

	}
};