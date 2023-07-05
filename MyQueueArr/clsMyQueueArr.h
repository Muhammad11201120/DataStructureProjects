#pragma once
#include<iostream>
#include"..\projectFour_MyDynamicList\myDynamicList.h"
using namespace std;


template<class T>
class clsMyQueueArr
{
protected:

	clsMyDynamicList<T> _myDinamicList;
public:

	void Push( T item )
	{
		_myDinamicList.InsertAtEnd( item );
	}
	void Pop()
	{
		_myDinamicList.DeleteLastItem();
	}
	int Size()
	{
		return _myDinamicList.Size();
	}
	T Front()
	{
		return _myDinamicList.GetItem( 0 );
	}
	T Back()
	{
		return _myDinamicList.GetItem( _myDinamicList.Size() - 1 );
	}
	T GetItem( int index )
	{
		return _myDinamicList.GetItem( index );
	}
	void InsertAtFront( T item )
	{
		_myDinamicList.InsertAtBeganing( item );
	}
	void InsertAtBack( T item )
	{
		_myDinamicList.InsertAtEnd( item );
	}
	void Revers()
	{
		_myDinamicList.Reverse();
	}
	void Clear()
	{
		_myDinamicList.Clear();
	}
	void Print()
	{
		_myDinamicList.Print();
	}
};
