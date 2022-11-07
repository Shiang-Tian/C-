#include <iostream>

using namespace std;

main()
{
    /*
        AND conjunction &&

        7 > 5 && 5 != 10 //conjunction is true ONLY if both expressions are true

        expr1 expr2 result
          0     0     0
          0     1     0
          1     0     0
          1     1     1



        OR disjunction || (alternative)

        expr1 expr2 result
          0     0     0
          0     1     1
          1     0     1
          1     1     1


    */
     cout << (7 > 5 && 5 != 10 ) << endl;
     cout << (5 > 7 && 5 != 10 ) << endl;

     cout << (5 > 7 || 5 != 10 ) << endl;
     cout << (5 > 7 || 5 == 10 ) << endl;
}
