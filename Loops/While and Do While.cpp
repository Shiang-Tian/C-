#include <iostream>

using namespace std;

main()
{
    int i = 0;
    //This will cause the infinity 'lala'
    /*while(i < 10)
        cout << "lala" << endl;
    */

    //This will run for ten times
    /*while(i < 10)
    {
        cout << "lala" << endl;
        i++;
    }
    */

    //this is from 0 to 9
    while(i < 10)
    {
        cout << i << endl;
        i++;
    }

    //this is from 9 to 0
    int r = 10;
    while(r--)
    {
        cout << r << endl;
    }
    int p = 10;
    //this is from 9 to 1
     while(--p)
    {
        cout << p << endl;
    }

    //this is from 1 to 10
    int j = 0;
    while(j++ < 10)
    {
        cout << j << endl;
    }
    //this is from 1 to 9
    int k = 0;
    while(++k < 10)
    {
        cout << k << endl;
    }



    const int SIZEOFARRAY = 10;
    int q = 0;
    int array[SIZEOFARRAY];
    //while loop
    //We can get the same result using the methods below
    while (q < SIZEOFARRAY)
    {
        array[q] = 10 * q;
        cout << array[q] << endl;
        q++;
    }

    while (q < SIZEOFARRAY)
    {
        array[q] = 10 * q;
        cout << array[q++] << endl;
    }


    //do while loop
    do
    {
        cout << "lala";
    }
    while(q);

    //this won't be executed at all
    while (q)
        cout << "lalala";
}
