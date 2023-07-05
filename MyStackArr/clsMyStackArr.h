#pragma once
#include<iostream>
#include"..\projectFour_MyDynamicList\myDynamicList.h"
#include"..\MyQueueArr\clsMyQueueArr.h"
using namespace std;
template<class T>
class clsMyStackArr :public clsMyQueueArr  <T>
{
protected:
	clsMyQueueArr<T> _myQueue;
public:
	void Push( T item )
	{
		clsMyQueueArr<T>::_myDinamicList.InsertAtBeganing( item );
	}
	T Top()
	{
		return _myQueue.Back();
	}
	T Bottom()
	{
		return _myQueue.Front();
	}
};