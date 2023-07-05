#pragma once
#include<iostream>
template <class T>
class clsMyDynamicList
{
protected:
	int _size = 0;
	T* arr;
	T* tempArr;
public:
	clsMyDynamicList( int size = 0 )
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

	void Resize( int index )
	{
		if ( index == this->_size )
		{
			return;
		}
		if ( index < 0 )
		{
			index = 0;
		}

		tempArr = new T[ index ];

		if ( index < this->_size )
		{
			this->_size = index;
		}

		for ( int i = 0; i < this->_size; i++ )
		{
			tempArr[ i ] = arr[ i ];
		}

		this->_size = index;// incase index greaer than _size

		delete[]arr;
		arr = tempArr;
	}
	T GetItem( int index )
	{
		return this->arr[ index ];
	}
	void Reverse()
	{
		tempArr = new T[ this->_size ];
		int counter = 0;
		for ( int i = this->_size - 1; i >= 0; i-- )
		{
			tempArr[ counter ] = this->arr[ i ];
			counter++;
		}
		delete[] this->arr;
		this->arr = tempArr;
	}
	void Clear()
	{
		this->_size = 0;
		this->tempArr = new T[ 0 ];
		delete[]this->arr;
		this->arr = this->tempArr;
	}
	bool Delete( int index )
	{
		if ( index >= this->_size || index < 0 )
		{
			return false;
		}
		this->_size--;
		tempArr = new T[ this->_size ];

		for ( int i = 0; i < index; i++ )
		{
			tempArr[ i ] = arr[ i ];
		}

		for ( int i = index + 1; i < this->_size + 1; i++ )
		{
			tempArr[ i - 1 ] = arr[ i ];
		}
		delete[] arr;
		arr = tempArr;
		return true;
	}
	bool DeleteFirstItem()
	{
		return Delete( 0 );
	}
	bool DeleteLastItem()
	{
		return Delete( this->_size - 1 );
	}
	int Find( T item )
	{
		for ( int i = 0; i < this->_size; i++ )
		{
			if ( arr[ i ] == item )
			{
				return i;
			}
		}
		return -1;
	}
	bool DeleteItem( T item )
	{
		int index = Find( item );
		if ( index != -1 )
		{
			Delete( index );
			return true;
		}
		return false;
	}
	bool InsertItem( int index , T value )
	{
		if ( index < 0 || index > this->_size )
		{
			return false;
		}
		this->_size++;
		tempArr = new T[ this->_size ];
		for ( int i = 0; i < index; i++ )
		{
			tempArr[ i ] = arr[ i ];
		}

		tempArr[ index ] = value;

		for ( int i = index + 1; i < this->_size; i++ )
		{
			tempArr[ i ] = arr[ i - 1 ];
		}
		delete[]arr;
		arr = tempArr;
		return true;
	}
	bool InsertAtBeganing( T value )
	{

		return InsertItem( 0 , value );
	}
	bool InsertAtEnd( T value )
	{
		return InsertItem( this->_size , value );
	}
	bool InsertBefore( int index , T value )
	{
		if ( index < 1 )
		{
			return  InsertItem( 0 , value );
		}
		return InsertItem( index , value );
	}
	bool InsertAfter( int index , T value )
	{
		if ( index >= this->_size )
		{
			return InsertItem( this->_size , value );
		}
		InsertItem( index + 1 , value );
	}
	void Print()
	{
		for ( int i = 0; i < this->_size; i++ )
		{
			std::cout << arr[ i ] << " ";
		}
	}
};