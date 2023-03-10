#include <iostream>

using namespace std;
//relational operator
main ()
{
    // 1 equal sign is reserved for assigning values to variables
    int a = 10;
    int b = 5;
    //2 equal signs are representing equality in C++
    //The result of relation operation is always 0 or 1. 1 represents true, just like in bool variable. 0 represents false
    cout << (a == b) << endl; //true when both variables have the same value
    cout << (a != b) << endl; //true when both variables DO NOT have the same value
    cout << (a > b) << endl;  //true when value of variable a is greater than value of variable b
    cout << (a < b) << endl;  //true when value of variable b is greater than value of variable a
    cout << (a >= b) << endl; //true when value of variable a is greater than or equal to the value of variable b
    cout << (a <= b) << endl; //true when value of variable b is greater than or equal to the value of variable a

    //We can also use exclamation marks to change value from true to false
    cout << !(a == b) << endl; //This is the same as (a != b)
}
