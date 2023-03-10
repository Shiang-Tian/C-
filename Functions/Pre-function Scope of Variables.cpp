#include <iostream>

using namespace std;

int globalVariable;

main()
{
    int localVariable;

    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: "<< localVariable << endl;

    int a = 10;
/*
    if(a == 10)
    {
        //result is the local variable, if we move the cout outside of the bracket of the if condition, then the compiler won't make it work
        int result = a * 10;
        cout << result << endl;
    }
*/

    int nr, result = 0;
    int i = 0;
    for (; i < 3; i++) //3,2,3 - will the result be 8? No (We have to assign 0 to the result!)
    {
        cout << "Enter " << (i + 1) << " number" << endl;
        cin >> nr;
        result += nr; //result = result + nr
    }
    cout << result << endl;
    cout << "We added " << i << " numbers" << endl;
}
