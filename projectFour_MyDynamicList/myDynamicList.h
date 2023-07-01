#pragma once
#include<iostream>
template <class T>
class clsMyDynamicList
{
protected:
	int _size = 0;
	T* arr;
public:
	clsMyDynamicList( int size )
	{
		if ( size < 0 )
		{
			size = 0;
		}
		this->_size = size;
		arr = new T[ size ];
	}
	~clsMyDynamicList()
	{
		delete[] arr;
	}
	bool SetItem( int index , T item )
	{
		if ( index >= this->_size || this->_size < 0 )
		{
			return false;
		}
		arr[ index ] = item;
		return true;
	}
	int Size()
	{
		return this->_size;
	}
	bool IsEmpty()
	{
		return ( this->_size == 0 );
	}
	void Print()
	{
		for ( int i = 0; i < this->_size; i++ )
		{
			std::cout << arr[ i ] << " ";
		}
	}
};