#include "Number.h"
#include "MyException.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Number x(1, 1);
    try
    {
        int mul = 2;
        cin >> x;
        cout << x;
        cout << " multiplier - ? "; cin >> mul;
        x = x * mul;
        cout << x << endl;
    }
    catch (const int m)
    {
        cout << " Введіть правильне значення. Число - " << m << " не задовільняє умову" << endl;
    }

    try 
    {
        Number y(2, 0);
        int mul = 3;
        cout << y;
        cout << " multiplier -  " << mul << endl;
        y = y * mul;
        cout << y << endl;
    }
    catch (MyException e)
    {
        cout << e.What() << endl << endl;
    }

    try
    {
        Number z(3, -3);
        int mul = 4;
        cout << z;
        cout << " multiplier -  " << mul << endl;
        z = z * mul;
        cout << z << endl;
    }
    catch (const bad_exception* e)
    {
        cout << "* " << e->what() << endl;
    }

    try
    {
        Number q(4, -4);
        int mul = 5;
        cout << q;
        cout << " multiplier -  " << mul << endl;
        q = q * mul;
        cout << q << endl;
    }
    catch (const bad_exception& a)
    {
        cout << "& " << a.what() << endl;
    }

    Number a(1, 1);
    cout << endl << endl;
    cout << " a  " << a << endl;
    ++a;
    cout << " ++a  " << a;
    --a;
    cout << " --a  " << a;
    a++;
    cout << " a++  " << a;
    a--;
    cout << " a--  " << a;

	return 0;
}