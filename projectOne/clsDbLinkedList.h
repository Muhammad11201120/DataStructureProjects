#pragma once
#include<iostream>
using namespace std;
template <typename T> class clsDbLinkedList
{
public:
	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};
	Node* head = NULL;
	Node* Find( T value )
	{
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->value == value)
			{
				return temp;
			}
			temp = temp->next;
		}
		return NULL;
	}
	void InsertAtBeganing( T value )
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = this->head;
		newNode->prev = NULL;
		if (this->head != NULL)
		{
			head->prev = newNode;
		}
		this->head = newNode;
	}
	void InsertAtEnd( T value )
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;
		if (this->head == NULL)
		{
			newNode->prev = NULL;
			this->head = newNode;
		}
		else
		{
			Node* temp = this->head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}
	void InsertAfter( T value )
	{
		//todo
	}
	void DeleteNode( T value )
	{
		//todo
	}
	void DeleteFirstNode( Node* head )
	{
		//todo
	}
	void DeleteLastNode( Node* head )
	{
		//todo
	}
	void PrintList()
	{
		while (this->head != NULL)
		{
			cout << head->value << " | ";
			head = head->next;
		}

	}
};