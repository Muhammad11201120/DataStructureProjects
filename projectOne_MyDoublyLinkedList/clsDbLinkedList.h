#pragma once
#include<iostream>
using namespace std;
template <class T>

class clsDbLinkedList
{
protected:
	int _size = 0;
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
		_size++;
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
			while (temp != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
		_size++;
	}
	void InsertAfter( Node*& node, T value )
	{
		Node* newNode = new Node();
		newNode->value = value;
		if (head == NULL)
		{
			newNode->next = NULL;
			newNode->prev = NULL;
			this->head = newNode;
		}
		else
		{
			newNode->next = node->next;
			newNode->prev = node;
			node->next = newNode;
			if (newNode->next != NULL)
			{
				newNode->next->prev = newNode;
			}
		}
		_size++;
	}
	void DeleteNode( Node*& node )
	{
		if (this->head == NULL || node == NULL)
		{
			return;
		}
		Node* current = this->head;
		while (current != node)
		{
			current = current->next;
		}
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		delete node;
		_size--;
	}
	void DeleteFirstNode()
	{
		if (this->head == NULL)
		{
			return;
		}
		Node* temp = this->head;
		this->head = this->head->next;
		this->head->prev = NULL;
		delete temp;
		_size--;
	}
	void DeleteLastNode()
	{
		Node* curretnt = head;
		if (head == NULL)
		{
			return;
		}
		if (curretnt->prev != NULL && curretnt->next != NULL)
		{
			delete curretnt;
			return;
		}
		while (curretnt != NULL)
		{
			curretnt = curretnt->next;
		}
		curretnt->prev->next = NULL;
		delete curretnt;
		_size--;
	}
	//getListSize
	int Size()
	{
		return _size;
	}
	//IsEmptyList
	bool IsEmpty()
	{
		return (_size == 0);
	}
	//Reverse
	void Reverse()
	{
		if (_size == 0)
		{
			return NULL;
		}
		Node* current = head;
		Node* temp = NULL;
		while (current != NULL)
		{
			temp = current->next;
			current->next = current->prev;
			current->prev = temp;

			current = current->prev;
		}

		// to put the head in correct position
		if (temp != NULL)
		{
			head = temp->prev;
		}
	}
	//getNode
	Node* GetNode( int index )
	{
		if (index < 0 || index > _size)
		{
			return NULL;
		}
		int counter = 0;
		Node* current = head;
		while (current != NULL && current->next != NULL)
		{
			if (counter == index)
			{
				return current;
			}
			current = current->next;
			counter++;
		}
		return NULL;
	}
	//getItem
	T GetItem( int index )
	{

		Node* itemNode = GetNode( index );
		if (itemNode != NULL)
		{
			return itemNode->value;
		}
		return NULL;
	}
	//UpdateNode
	bool updateNode( int index, T value )
	{
		Node* itemNode = GetNode( index );
		if (itemNode != NULL)
		{
			itemNode->value = value;
			return true;
		}
		else
			return false;
	}
	//InsertAfterIndex
	bool InsertAfterIndex( int indexs, T value )
	{
		Node* itemNode = GetNode( index );
		if (itemNode != NULL)
		{
			InsertAfter( itemNode, value );
			return true;
		}
		else
			return false;
	}
	void PrintList()

	{
		Node* Current = this->head;

		while (Current != NULL)
		{
			cout << Current->value << " | ";
			Current = Current->next;
		}
		cout << "\n";


	}
};