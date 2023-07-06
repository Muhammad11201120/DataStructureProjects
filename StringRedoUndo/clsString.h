#pragma once

#include<stack>
using namespace std;
class clsString
{
protected:
	stack<string> _redo;
	stack<string> _undo;
	string _value = "";

public:
	void setValue( string value )
	{
		this->_undo.push( this->_value );
		this->_value = value;

	}
	string getValue()
	{
		return this->_value;
	}
	void Undo()
	{
		if ( !_undo.empty() )
		{
			this->_redo.push( this->_value );
			this->_value = _undo.top();
			this->_undo.pop();
		}
	}
	void Redo()
	{
		if ( !_redo.empty() )
		{
			_undo.push( _value );
			_value = _redo.top();
			_redo.pop();
		}
	}
};

