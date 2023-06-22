#pragma once
#include<iostream>
#include"../projectOne_MyDoublyLinkedList/clsDbLinkedList.h"
#include"../projectTwo_MyQueu/MyQueue.h"
template <class T>
class clsMyStack : public clsMyQueue<T>
{
protected:
	clsMyQueue <int> MyQueue;
public:

	void Push( T item )
	{
		clsMyQueue<int>::_myList.InsertAtBeganing( item );
	}
	T Top()
	{
		return clsMyQueue<int>::Front();
	}
	T Bottom()
	{
		return clsMyQueue<int>::Back();
	}
};
