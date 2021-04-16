#pragma once
#include <iostream>
#include <sstream>
#include <Windows.h>
#include <exception>

using namespace std;

class Number
{
private:
	int first, second;
public:
	Number();
	Number(int, int);
	Number(const Number&);
	~Number();

	int GetFirst() const { return first; };
	int GetSecond() const { return second; };

	void SetFirst(int first) { this->first = first; }
	void SetSecond(int second) { this->second = second; }

	Number& operator = (const Number&);
	operator string() const;
	friend Number operator * (const Number&, int);
	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);
};

