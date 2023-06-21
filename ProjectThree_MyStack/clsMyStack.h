#pragma once
#include<iostream>
#include"../projectOne_MyDoublyLinkedList/clsDbLinkedList.h"
#include"../projectTwo_MyQueu/MyQueue.h"
template <class T>
class clsMyStack : public clsMyQueue<T>
{
public:
	void Push( T item )
	{
		clsMyQueue<T> _myList.InsertAtBeganing( item );
	}
	T Top()
	{
		return clsMyQueue<T>::_myList.Front();
	}
	T Bottom()
	{
		return clsMyQueue<T>::_myList.Back();
	}
};
