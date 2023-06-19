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
};