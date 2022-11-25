#include <iostream>

using namespace std;

main ()
{
    // U can only use "int" and "char" as the variable type, u can't use "double" cause it has some precision number after the number, and it's hard to compare
    // We also can't use "string" in switch case
    int x = 50;
    switch (x)
    {
        //If u don't add "break" in each case, then when u switch to other cases, then the things below to the case u r in will also show up
        case 0:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 0" << endl;
            break; //If u don't add this, then when u change the x value from 50 to 0, then the following sentences will show up
        case 25:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 25" << endl;
            break;
        case 50:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 50" << endl;
            break; // if u  don't want the following thing in the "default" to show up, then u need to add this
        default:
            cout << "this is a place for the instructions that will be executed when value of switched value is not equal to any case" << endl;
    }

    //Here is sth that is related to ASCII, we can see the results of d and 100 are equal
    char y = 'd';
    switch (y)
    {
        //If u don't add "break" in each case, then when u switch to other cases, then the things below to the case u r in will also show up
        case 'd':
            cout << "this is a place for the instructions that will be executed when switched value is equal to 0" << endl;
            break; //If u don't add this, then when u change the x value from 50 to 0, then the following sentences will show up
        case 25:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 25" << endl;
            break;
        case 50:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 50" << endl;
            break; // if u  don't want the following thing in the "default" to show up, then u need to add this
        default:
            cout << "this is a place for the instructions that will be executed when value of switched value is not equal to any case" << endl;
    }

    char z = 100;
    switch (z)
    {
        //If u don't add "break" in each case, then when u switch to other cases, then the things below to the case u r in will also show up
        case 'd':
            cout << "this is a place for the instructions that will be executed when switched value is equal to 0" << endl;
            break; //If u don't add this, then when u change the x value from 50 to 0, then the following sentences will show up
        case 25:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 25" << endl;
            break;
        case 50:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 50" << endl;
            break; // if u  don't want the following thing in the "default" to show up, then u need to add this
        default:
            cout << "this is a place for the instructions that will be executed when value of switched value is not equal to any case" << endl;
    }



}
