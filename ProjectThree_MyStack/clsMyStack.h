#pragma once
#include<iostream>
#include"../projectOne_MyDoublyLinkedList/clsDbLinkedList.h"
#include"../projectTwo_MyQueu/MyQueue.h"
template <class T>
class clsMyStack : public clsMyQueue<T>
{
public:
	clsMyQueue<int>MyQueu;
	void Push( T item )
	{
		MyQueu.InsertAtFront( item );
	}
	T Top()
	{
		return MyQueu.Front();
	}
	T Bottom()
	{
		return MyQueu.Back();
	}
};
