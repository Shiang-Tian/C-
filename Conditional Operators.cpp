#include <iostream>

using namespace std;

main()

{
    int a = 10;
    int b = 20;
    //condition ? so instruction that will be executed if condition is true: if condition is not true;
    //if a is greater than b, then assign the message that is in " ". Else, a is less or equal to b
    string message = (a > b) ? "a > b" : "a <= b";

    cout << message << endl;


    int c = 50;
    int d = 20;
    //condition ? so instruction that will be executed if condition is true: if condition is not true;
    //if a is greater than b, then assign the message that is in " ". Else, a is less or equal to b
    string message1 = (c > d) ? "c > d" : "c <= d";

    cout << message1 << endl;

    int e = 30;
    int f = 20;
    //condition ? so instruction that will be executed if condition is true: if condition is not true;
    //if a is greater than b, then assign the message that is in " ". Else, a is less or equal to b
    string message2 = (e > f) ? "e > f" : "e <= f";
    //if e > f, then chose e, else chose f
    cout << ((e > f ? e : f) + 10 ) << endl;

}
