# C++
This repository is the basic things for C++
```c++
// iostream stands for input output stream
#include <iostream>
main ()
{
  //cout stands for Console Output, "this is test" will be sent to the Console Output
  cout << "this is test";
}
```
** This won't be able to run cause "cout" is inside a namespace, you need to add "using namespace" or "std::", see the following code: **
```c++
// iostream stands for input output stream
#include <iostream>
using namespace std;

main ()
{
  //cout stands for Console Output, "this is test" will be sent to the Console Output
  cout << "this is test";
}
```
**Now you can run your code :)**
