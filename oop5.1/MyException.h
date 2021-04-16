#pragma once
#include <iostream>

using namespace std;

class MyException : public exception
{
	string message;
public:
	MyException(const string& s) : message(s) { }
	string What() const { return message; }
};