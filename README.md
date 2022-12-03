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
