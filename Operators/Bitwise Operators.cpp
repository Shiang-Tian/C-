#include <iostream>

using namespace std;
main ()
{
    /*
    126 = 1 * 10^2 + 2 * 10^1 + 6 * 10^0 = 100 + 20 + 6;
    1 0 1 0 = 1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0 = 8 + 0 + 2 + 0 = 10
    1 0 1 1 0 0 = 2^2 + 2^3 + 2^5 = 44
    */

    /*
    Bitwise AND --> &
    Bitwise OR --> |
    Bitwise NOT --> ~ (tilde)
    Bitwise XOR --> ^ (caret) exclusive OR
    0 0 0
    0 1 1
    1 0 1
    1 1 0
    Bitwise left shift <<
    Bitwise right shift >>
    */

    cout << (10 & 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0
    */
    cout << (10 | 2) << endl;
    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 1 0
    */
    cout << (10 ^ 2) << endl;
    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 0 0
    */
    cout << (~10) << endl;
     /*
        000000000000000000000000000000000000 1 0 1 0
        111111111111111111111111111111111111 0 1 0 1
    */
    //move one bit to the left
    cout << (10 << 1) << endl;
    /*
        000000000000000000000000000000000001 0 1 0 0, this equals 20 (decimal notation)


    */
    cout << (10 << 3) << endl;  //This thing means that we are multiplying 10 by 2 raised to the power of 3
    /*
        000000000000000000000000000000000101 0 0 0 0 = 2^4 + 2^6 = 80
        this equals 80 (decimal notation)

    */


     cout << (10 >> 1) << endl;  //This thing means that we are dividing 10 by 2 raised to the power of 3
    /*
        00000000000000000000000000000000000 0 1 0 1, this equals 20 (decimal notation)


    */


}
