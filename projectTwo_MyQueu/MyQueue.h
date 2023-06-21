#pragma once
#include<iostream>
#include"../projectOne_MyDoublyLinkedList/clsDbLinkedList.h"
template <class T>
class clsMyQueue
{
protected:
	clsDbLinkedList<int> _myList;
public:
	void Push( T value )
	{
		_myList.InsertAtEnd( value );
	}
	void Pop()
	{
		_myList.DeleteFirstNode();
	}
	void Print()
	{
		_myList.PrintList();
	}
	//size
	int Size()
	{
		return _myList.Size();
	}
	//isempty
	bool IsEmpty()
	{
		return _myList.IsEmpty();
	}
	//front
	T Front()
	{
		return _myList.GetItem( 0 );
	}
	//back
	T Back()
	{
		return _myList.GetItem( Size() - 1 );
	}
	//GetItem
	T GetItem( int index )
	{
		clsDbLinkedList<int>::Node* itemNode = _myList.GetNode( index );
		if ( itemNode != NULL )
		{
			return itemNode->value;
		}
		return NULL;
	}
	//Reverse
	void Revers()
	{
		_myList.Reverse();
	}
	//UpdateItem
	void UpdateItem( int index , T value )
	{
		_myList.updateNode( index , value );
	}
	//InsertAfter
	void InsertAfter( clsDbLinkedList<int>::Node*& node , T value )
	{
		_myList.InsertAfter( node , value );
	}
	//InsertAtFront
	void InsertAtFront( T value )
	{
		_myList.InsertAtBeganing( value );
	}
	//InsertAtBack
	void InsertAtBack( T value )
	{
		_myList.InsertAtEnd( value );
	}
	//Clear
	void Clear()
	{
		_myList.Clear();
	}
};