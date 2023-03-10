#include <iostream>
using namespace std;
//operators
main ()
{

    int a = 10;
    int b = 4;

    //addition operation
    cout << a + b << endl;
    //substraction operation
    cout << a - b << endl;
    //multiplication
    cout << a * b << endl;
    //division
    //If we change b from 5 to 4, the result remains 2 (when you divide two integers, the result will always be integer)
    cout << a / b << endl;

    //10 % 4 = 2 --remainder: the amount left over after the division of two integers
    //1 % 5 = 1
    cout << a % b << endl;


    //If we want to have a real number in the result, one of the variables must be double or float
    float a1 = 10;
    int b1 = 4;
    //addition operation
    cout << a1 + b1 << endl;
    //substraction operation
    cout << a1 - b1 << endl;
    //multiplication
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;

    //incrementation: increase current value by 1
    //decrementation: decrease current value by 1

    int c = 1;
    //c = c + 1;
    c += 1;  //It is the same as c = c + 1;
    cout << c << endl;





    //POSTincrementation
    int d = 1;
    cout << d++ << endl; //++ here is the increment operator
    cout << d << endl;

    //PREincrementation
    int d1 = 1;
    cout << ++d1 << endl;
    cout << d1 << endl;

    //POSTdecrementation
    int d2 = 1;
    cout << d2-- << endl; //++ here is the increment operator
    cout << d2 << endl;

    //PREdecrementation
    int d3 = 1;
    cout << --d3 << endl;
    cout << d3 << endl;


}
