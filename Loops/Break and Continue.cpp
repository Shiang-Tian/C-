#include <iostream>

using namespace std;

main()
{
    /*
        1 2 3 4  5  6  7  8  9  10
        2 4 6 8  10 12 14 16 18 20
        3 6 9 12 15 ...
        4 ...
        5 ...
    */

    for (int i = 1; i <= 7; i++) //amount of rows and the length of columns
    {
        for (int j = 1; j <= 5; j++) //amount of columns and the length of rows
        {
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 10; i++) //amount of rows and the length of columns
    {
        for (int j = 1; j <= 10; j++) //amount of columns and the length of rows
        {
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    //continue
    //we won't see the fifth row of all 10 rows
    for (int i = 1; i <= 10; i++) //amount of rows and the length of columns
    {
        if (i == 5)
            continue; //everything after CONTINUE instruction WON'T be executed but loop won't end because of it (we will skip the codes after continue)

        for (int j = 1; j <= 10; j++) //amount of columns and the length of rows
        {
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    //break
    //we won't see the rows after the fifth row
    for (int i = 1; i <= 10; i++) //amount of rows and the length of columns
    {
        if (i == 5)
            break; //everything after BREAK WON'T be executed and we are leaving the actual loop (the external one)

        for (int j = 1; j <= 10; j++) //amount of columns and the length of rows
        {
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    //continue
    //we won't see the fifth column of all 10 columns
    for (int i = 1; i <= 10; i++) //amount of rows and the length of columns
    {
        for (int j = 1; j <= 10; j++) //amount of columns and the length of rows
        {
            if (j == 5)
                continue;

            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    //break
    //we won't see the columns after the fifth column
    for (int i = 1; i <= 10; i++) //amount of rows and the length of columns
    {
        for (int j = 1; j <= 10; j++) //amount of columns and the length of rows
        {
            if (j == 5)
                break;

            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    cout << endl;

    //Only one row
    for(int i = 1, j = 1; i <= 10; i++)
    {
        cout.width(4);
        cout << i * j;
    }
    cout << endl;
    cout << endl;

    //use only one for loop to get 10 rows and 10 columns
    for(int i = 1, j = 1; i <= 10; i++)
    {
        cout.width(4);
        cout << i * j;

        if(i ==10)
        {
            j++;
            i = 0;
            cout << endl;
        }
        //if not adding the +1 in the if condition, then the tenth row won't be executed
        if (j == 10 + 1)
            break;
    }
}



