#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10, temp;
    cout <<  "Before swapping." << endl;
    cout << "a = " << a << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping\n" << endl;
    cout << "a = " << a << "b = " << b << endl ;
}
