#include <iostream>
#include <cstdlib>

using namespace std;

int multiplyWithoutOperator(int a, int b)
{
    if(a == 0 || b == 0)
        return 0;

    if (a > 0)
        return (b + multiplyWithoutOperator(a - 1, b));
    else
        return -multiplyWithoutOperator(-a, b);
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
