#include "Number.h"
#include "MyException.h"
Number::Number()
{
    first = 1;
    second = 1;
}
Number::Number(int f=1, int s=1)
{
    first = f;
    if (s == 0)
      throw MyException(" Error MyException ");

    if (s == -4)
        throw bad_exception();

    bad_exception *t = new bad_exception;
    if (s < 0)
        throw t;
    second = s;
}
Number::Number(const Number& n)
{
    first = n.first;
    second = n.second;
}
Number::~Number() { }

Number operator * (const Number& a, int b)
{
    return Number(a.first * b, a.second * b);
}

Number& Number::operator = (const Number& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

Number::operator string () const
{
    stringstream sstr;
    sstr << " first = " << first << "  ";
    sstr << " second = " << second << endl;
    return sstr.str();
}

ostream& operator << (ostream& out, const Number& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Number& r)
{
    cout << " first = "; in >> r.first;
    do {
        cout << " second = "; in >> r.second;
        if(r.second < 0)
            cerr << " Error 0" << endl;
    } while (r.second < 0);
    cout << endl;
    return in;
}

Number& Number::operator ++()
{
    first++;
    return *this;
}
Number& Number::operator --()
{
    first--;
    return *this;
}
Number Number::operator ++(int)
{
    Number t(*this);
    second++;
    return t;
}
Number Number::operator --(int)
{
    Number t(*this);
    second--;
    return t;
}