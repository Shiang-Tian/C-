#include <iostream>

using namespace std;

main ()
{
    int a = 4, b = 20;
    /*
    cout << "Enter a: "<< endl;
    cin >> a;

    cout << "Enter b: "<< endl;
    cin >> b;
    */

    /*
    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
        cout << a << " < " << b << endl;
    else
        cout << "that instruction is executed ONLY if all of the conditions weren't met" << endl;
    */

    /*
    if (4 > 7)
    {
        cout << "something" << endl;
        cout << "test";
    }
    */

    /*
    if (12341234.51235)
        cout << "condition above is surely not equal to 0" << endl;
    */

    /*
    if (7 < 4 || 0 < 10)
        cout << "7 < 4 || 0 < 10" << endl;
    */

    /*
    if ((7 < 4 || 0 < 10) && (10 == 9))
        cout << "7 < 4 || 0 < 10" << endl;
    */

    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
    {
        cout << a << " < " << b << endl;
        if (a < 10)
            cout << "a is smaller than 10";
    }
    else
        cout << "that instruction is executed ONLY if all of the conditions weren't met" << endl;


}
