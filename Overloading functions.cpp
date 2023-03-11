#include <iostream>

using namespace std;

int power (int, int);
int power1 (int, int);
int power2 (int, int);

double power (double, int);

int main ()
{


    //cout << power (2,3) << endl;
    cout << power1 (2, 4) << endl;
    cout << power2 (2, 6) << endl;

    cout << power (2.5, 3) << endl;


    return 0;
}
/*
    2 ^ 3 = 2 * 2 * 2
*/
int power (int b, int e) //b = 2, e = 3
{
    int tmp = b; //tmp = 2
    while (e > 1)
    {
        b = b * tmp;//b = b * tmp;
        e--;
    }

    return b;
}

int power1 (int b1, int e1)
{
    int tmp1 = b1;
    while (e1-- > 1)
        b1 *= tmp1;

    return b1;
}

/*
    2 ^ 1 = 2
    2 ^ 2 = 4
    2 ^ 3 = 8
*/
int power2 (int b2, int e2) //b = 2, e = 3
{
    int tmp2 = b2; //tmp = 2
    int i = 0;

    while (i++ < e2)
    {
        cout << tmp2 << " ^ " << i << "=" << b2 << endl;

        if (i != e2)
        {
            b2 *= tmp2;//b = b * tmp;
        }
    }

    return b2;
}

double power(double b, int e)
{
    double tmp = b;
    while (e-- > 1)
        b *= tmp;

    return b;
}
