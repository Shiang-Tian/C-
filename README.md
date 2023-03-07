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
**This won't be able to run cause "cout" is inside a namespace, you need to add "using namespace" or "std::", see the following code:**    
## __Add "using namespace"__
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
## __Add "std::" in front of the cout__
```c++
// iostream stands for input output stream
#include <iostream>

main ()
{
  //cout stands for Console Output, "this is test" will be sent to the Console Output
  std:: cout << "this is test";
}
```
**Now you can run your code :)**

<details open="open">
  <summary><b>Table of Contents</b></summary>
  <ol>
    <li>
      <a href="#Basics">Basics</a>
      <ul>
        <li><a href="#Variables">Variables</a></li>
        <li><a href="#Types-of-Variables">Types of Variables</a></li>  
        <li><a href="#Downloading-data-from-the-input">Downloading data from the input</a></li>
      </ul>
    </li>
    <li>
      <a href="#Operators">Operators</a>
      <ul>
        <li><a href="#Arithmetic-and-Assigment-Operators">Arithmetic and Assigment Operators</a></li>
        <li><a href="#Relational-Operators">Relational Operators</a></li>  
        <li><a href="#Logical-Operators">Logical Operators</a></li>
        <li><a href="#Bitwise-Operators">Bitwise Operators</a></li>
      </ul>
    </li>
    <li>
      <a href="#Conditions">Conditions</a>
      <ul>
        <li><a href="#Conditional-Statements">Conditional Statements</a></li>
        <li><a href="#Switch">Switch</a></li>
        <li><a href="#Conditional-Operators">Conditional Operators</a></li>
        <li><a href="#Calculator">Calculator</a></li>
      </ul>
    </li>
    <li>
      <a href="#Arrays">Arrays</a>
      <ul>
        <li><a href="#Arrays">Arrays</a></li>
        <li><a href="#Multidimensional-Arrays">Multidimensional Arrays</a></li>
      </ul>
    </li>
    <li>
      <a href="#Loops">Loops</a>
      <ul>
        <li><a href="#for-loop">For Loop</a></li>
        <li><a href="#while-and-do-while">While and Do While</a></li>
        <li><a href="#exercises-and-nested-loop">Exercises and Nested Loop</a></li>
        <li><a href="#break-and-continue">Break and Continue</a></li>
      </ul>
    </li>
  </ol>
</details>

# __Basics__
## __Variables__
* Variables can't have the same name
* Variables can't start from the number
* We can't use spaces
* Our variables should be self-descriptive
* Variables can't be constructed of special characters, keywords
* Variables should be nouns
## __Types of Variables__
```c++
  //short means short integer
  short
  
  //float allocates 4 bytes of memory
  float
  
  //double allocates a bytes of memory
  //double can save more digits after the point
  double
  
  //char is the abbreviation of the character
  char
  
  //boolean | true or false, so false is always 0, every other number is true, 1 represents true
  bool
```
# __Operators__
## __Arithmetic and Assigment Operators__
* Addition operation
* Substraction operation
* Multiplication
* Division
* Incrementation
* Decrementation
* POST Incrementation
* PRE Incrementation
* POST Decrementation
* PRE Decrementation
## __Relational Operators__
```diff
1. The result of relation operation is always 0 or 1. 1 represents true, just like in bool variable. 0 represents false
2. We can also use exclamation marks to change value from true to false
```
## __Logical Operators__
* AND conjunction: &&
* OR disjunction: ||
## __Bitwise Operators__
* Bitwise AND --> &
* Bitwise OR --> |
* Bitwise NOT --> ~ (tilde)
* Bitwise XOR --> ^ (caret) exclusive OR
* Bitwise left shift <<
* Bitwise right shift >>
# __Conditions__
## __Switch__
1. Variable types you can use: 
* int
* char
2. Variable types you can't use:
* double
* string 
 
**You can't use "double" cause it has some precision number after the number, and it's hard to compare**  
## __Conditional Operators__
1. If a is greater than b, then assign the message that is in " ". Else, a is less or equal to b
```c++
 (a > b) ? "a > b" : "a <= b"
```
2. If e is greater than f, then chose e, else chose f. After chosing the largest one, then add 10 to it.
```c++
((e > f ? e : f) + 10 )
```
## __Calculator__
* Add: +
* Substract: -
* Multiply: * 
* Divide: /
# __Arrays__
## __Arrays__
The way of naming an array: TYPE NAME[SIZE_NUMBER_OF_ELEMENTS]
* int array[4]
## __Multidimensional Arrays__
```c++
int biArrays[3][4] = {0};

//checking the address of the array
//The address of biArrays[0] and biArrays[0][0] are the same
cout << &biArrays[0] << endl;
cout << &biArrays[0][0] << endl;
```
# __Loops__
## __For Loop__
```c++
//infinite loop
for (;;)
    cout << "lala" << endl;
```
## __While and Do While__
### __While__
```c++
const int SIZEOFARRAY = 10;
int q = 0;
int array[SIZEOFARRAY];
//We can get the same result using the methods below
//1.
while (q < SIZEOFARRAY)
{
  array[q] = 10 * q;
  cout << array[q] << endl;
  q++;
}
//2.
while (q < SIZEOFARRAY)
{
  array[q] = 10 * q;
  cout << array[q++] << endl;
}
```
**This won't be executed at all**
```c++
while (q)
  cout << "lalala";
```
### __Do While__
```c++
do
{
  cout << "lala";
}
while(q);
```
## __Exercises and Nested Loop__
```c++
//15 rows and 12 columns
for (int i = 1; i <= 15; i++)
{
  for (int j = 1; j <= 12; j++)
  {
    cout.width(4);
    cout << i * j;
  }
  cout << endl;
}
```
## __Break and Continue__
### __Break__
Everything after **BREAK** **WON'T** be executed and we are leaving the actual loop
#### __We won't see the rows after the fifth row__
```c++
for (int i = 1; i <= 10; i++) 
{
  if(i == 5)
    break;
  for (int j = 1; j <= 10; j++)
  {
    cout.width(4);
    cout << i*j;
  }
  cout << enddl;
}
```
#### __We won't see the columns after the fifth column__
```c++
for (int i = 1; i <= 10; i++)
{
  for (int j = 1; j <= 10; j++)
  {
    if (j == 5)
      break;
      
    cout.width(4)
    cout << i*j;
  }
  cout << endl;
}
```
### __Continue__
Everything after **CONTINUE** instruction **WON'T** be executed but loop won't end because of it (we will skip the codes after **CONTINUE**)
#### __We won't see the fifth row of all 10 rows__
```c++
for (int i = 1; i <= 10; i++)
{
  if (i == 5)
    continue;
  
  for (int j = 1; j <= 10; j++)
  {
    cout.width(4)
    cout << i * j;
  }
  cout << endl;
}
```
#### __We won't see the fifth column of all 10 columns__
```c++
for (int i = 1; i <= 10; i++)
{
  for (int j = 1; j <= 10; j++)
  {
    if (j ==5)
        continue;
    cout.width (4);
    cout << i * j;   
  }
  cout << 
}
```
