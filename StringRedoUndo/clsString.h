#pragma once
#include<iostream>
#include"..\MyStackArr\clsMyStackArr.h"
using namespace std;
class clsString
{
protected:
	clsMyStackArr<string> _myStaack;
	string _value = "";
public:
	void Undo()
	{
		_myStaack.Pop();
	}
	void Redo()
	{
		_myStaack.Push( _value );
	}
};

