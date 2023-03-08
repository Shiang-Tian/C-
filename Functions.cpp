#include <iostream>

using namespace std;

void welcome(); //declaration of the function, "welcome" is the name of the function
bool isNumber(string);
void enterName();
//inline function
double add (double a, double b) {return a + b;}
void changeValueTo10 (int x)
{
    x = 10;
}

int main()
{
    /*
    enterName (); //we quote the function here
    enterName ();
    enterName ();
    */
    //cout << add(4,5);
    char ch;
    cout << "Do you want to end the program? (Y/N)" << endl;

    cin >> ch;
    //if you enter 'Y' or 'y', the whole program will end
    if(ch == 'Y' || ch == 'y')
        return 0;
    //if you enter 'N' or 'n', the whole program will continue and will show 5, then return 0
    int a = 5;

    changeValueTo10 (a);
    cout << a;

    return 0;
}
void welcome ()
{
    cout << "Hello, welcome in my program !" << endl;
}
bool isNumber(string tmp)
{
    /*
    if (tmp[0] == '0')
        return false;
    */
    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp [i] <= 57))
            return false;
    }

    return true;
}
void enterName ()
{
    string tmp;

    cout << "Enter the number: " << endl;
    cin >> tmp;


    if (isNumber(tmp))
        cout << "Number entered properly " << endl;
    else
        cout << "Number wasn't entered properly " << endl;
}
