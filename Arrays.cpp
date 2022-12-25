#include <iostream>

using namespace std;
//Arrays
main ()
{
    int a;
    //int a,b,c,d,e,f,g,h,i,j;
    //int var1, var2, var3, var4, var5...

    int array[4]; //TYPE NAME[SIZE_NUMBER_OF_ELEMENTS];

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;

    cout << "array [0] = " << array[0] << endl;
    cout << "array [1] = " << array[1] << endl;
    cout << "array [2] = " << array[2] << endl;
    cout << "array [3] = " << array[3] << endl;

    //How to get the address of element in the array?
    cout << "array [0] = " << array[0] << ", address: " << &array[0] << endl;
    cout << "array [0] = " << array[1] << ", address: " << &array[1] << endl;
    cout << "array [0] = " << array[2] << ", address: " << &array[2] << endl;
    cout << "array [0] = " << array[3] << ", address: " << &array[3] << endl;
    //The result is hexadecimal, we need to change to decimal system
    /*
        0 1 2 3 4 5 6 7 8 9 a b c d e f
        a = 10, b = 11, c = 12, d = 13, e = 14, f = 15
        1 2 a = 1 * 16 ^ 2 + 2 * 16 ^ 1 + a * 16 ^ 0 = 256 + 32 + 10 = 298
    */
    //This is the same as &array[0]
    cout << "array [0] = " << array[0] << ", address: " << array << endl;

    //Let's check
    if (&array[0] == array)
        cout << "that's true";


    // We can't get the size of the array after we run the program, it has to be before we run the program
    int b;
    cin >> b;
    int x[b];

    //We can do this to get the size of the array
    const int c = 10;
    int y[c];















}
