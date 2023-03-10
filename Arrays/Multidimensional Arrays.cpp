#include <iostream>

using namespace std;

main ()
{
    int biArrays[3][4] = {0};

    //checking the address of the array
    //The address of biArrays[0] and biArrays[0][0] are the same
    cout << &biArrays[0] << endl;
    cout << &biArrays[0][0] << endl;

    cout << &biArrays[0][1] << endl;
    cout << &biArrays[0][2] << endl;
    cout << &biArrays[0][3] << endl;

    cout << &biArrays[1] << endl;
    cout << &biArrays[1][0] << endl;
    cout << &biArrays[1][1] << endl;
    cout << &biArrays[1][2] << endl;
    cout << &biArrays[1][3] << endl;
}
