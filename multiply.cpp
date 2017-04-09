#include <iostream>
#include <cstdlib>

using namespace std;

int multiplyWithoutOperator(int a, int b)
{
    if(a == 0 || b == 0)
        return 0;

    int result = 0;
    for (int i = 0; i < abs(a); i++)
    {
        result += b;
    }

    if (a > 0)
        return result;
    else
        return -result;
}

int main (int argc, char *argv[])
{
    int a;
    int b;
    int result;
    cout << "Enter a first number a = ";
    cin >> a;
    cout << "Enter a second number b = ";
    cin >> b;

    if(cin.fail())
    {
        cout << "--ERROR: a or b is not a integer! Try  again." << endl;
    }
    else
    {
        result = multiplyWithoutOperator(a, b);
        cout << a << " * " << b << " = " << result << endl;
    }

}
