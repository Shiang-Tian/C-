# C++
1. This repository is the basic things for C++  
2. In here, the following issues are displayed in the code file: 

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
  </ol>
</details>

* Variables  
* Types of variables  
* Downloading data from the input  
* Arithmetic and Assigment Operators  
* Relational Operators  
* Logical Operators
* Bitwise Operators
* Conditional Statements
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
