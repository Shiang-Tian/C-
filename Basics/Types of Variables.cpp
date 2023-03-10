#include <iostream>

using namespace std;

main()
{
    //Type_of_Variable name_of_variable;

    //Type_of_Variable name_of_variable1, name_of_variable2, name_of_variable3;

    int a = 40, b = 0, c = 20;
    cout << "a: " << a << " address: " << &a << endl;
    cout << "b: " << b << " address: " << &b << endl;
    cout << "c: " << c << " address: " << &c << endl;

    //short means short integer
    short t1 = 5;
    cout << t1 << endl;

    //float allocates 4 bytes of memory
    float t2 = 5.12;
    //double allocates a bytes of memory
    //double can save more digits after the point
    double t3 = 5.12;

    cout << t2 << endl;
    cout << t3 << endl;


    //char is the abbreviation of the character
    char t4;

    t4 = 'a';
    cout << t4 << endl;


    string t5 = "Hello World! :-)";
    cout << t5 << endl;

    //Combined two strings
    string x = "part1";
    string y = "part2";
    string combinedStrings = x + " " + y;
    cout << combinedStrings << endl;

    //boolean | true or false, so false is always 0, every other number is true, 1 represents true
    bool t6 = 123123123;

    cout << t6 << endl;

    //for unsigned short int, 0 to 65535

    unsigned short int t7 = 3700;
    cout << t7 << endl;

    const string NAMEOFGAME = "Conqueror of C++";
    cout <<  NAMEOFGAME << endl;










}
