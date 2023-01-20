#include <iostream>

using namespace std;

main()
{
    /*
        for (initialization; condition; inc/dec)
            instruction-to-repeat;
    */
        for(int i= 0; i < 5; i++)
            cout << "tasdasd" << endl;

        for(int i= 0; i < 3; i++)
            cout << i << endl;

        cout << "lala" << endl;



        int Array[100];
        for(int i= 0; i < 100; i++)
        {
            Array[i] = i;
            cout << Array[i] << endl;
        }

        //infinite loop
        for (;;)
            cout << "lala" << endl;
}
