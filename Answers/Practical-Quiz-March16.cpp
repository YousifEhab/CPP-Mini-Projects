#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, d;
    char choice;
    cout << "the real part of the first complex number (a) =";
    cin >> a;
    cout << "the imaginary part of the first complex number (b) = ";
    cin >> b;
    cout << "the real part of the second complex number (c) = ";
    cin >> c;
    cout << "the imaginary part of the second complex number (d) = ";
    cin >> d;
    cout << "choose an operation of the following:\n";
    cout << "+ for addition of X and Y\n";
    cout << "- for subtraction of X and Y\n";
    cout << "* for multiplication of X and Y\n";
    cout << "/ for division of X and Y\n";
    cout << "^ for square of X\n";
    cout << "% for the conjugate of X\n";
    cout << "C for Cosine of X\n";
    cout << "S for Sine of X\n";
    cin >> choice;
    if (choice == '+')
    {
        cout << "X + Y = " << a + c << " + "
             << "i" << b + d;
    }
    else if (choice == '-')
    {
        cout << "X - Y = " << a - c << " + "
             << "i" << b - d;
    }
    else if (choice == '*')
    {
        cout << "X * Y = " << a * c - b * d << " + "
             << "i" << a * d + b * c;
    }
    else if (choice == '/')
    {
        if (c == 0 && d == 0)
        {
            cout << "ERROR: Can't divide by zero";
        }
        else
        {
            cout << "X / Y = " << (a * c + b * d) / (c * c + d * d) << " + "
                 << "i" << (b * c - a * d) / (c * c + d * d);
        }
    }
    else if (choice == '^')
    {
        cout << "X ^ 2 = " << a * a - b * b << " + "
             << "i" << a * b + b * a;
    }
    else if (choice == '%')
    {
        cout << "X conjugate = " << a;
    }
    else if (choice == 'C' || choice == 'c')
    {
        cout << "cos(X) = " << cos(a + b);
    }
    else if (choice == 'S' || choice == 's')
    {
        cout << "sin(X) = " << sin(a + b);
    }
    else
    {
        cout << "ERROR: unsupported operation";
    }

    // system("pause");
    return 0;
}
