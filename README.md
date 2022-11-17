# C++
1. This repository is the basic things for C++  
2. In here, the following issues are displayed in the code file: 

<details open="open">
  <summary><b>Table of Contents</b></summary>
  <ol>
    <li>
      <a href="#Basics">Basics</a>
    </li>
    <li>
      <a href="#the-gui">The GUI</a> 
    </li>
    <li>
      <a href="#the-instructions-for-using-this-GUI">The Instructions for using this GUI</a>
      <ul>
        <li><a href="#right-hand-side">Right-hand-side</a></li>
        <li><a href="#left-hand-side">Left-hand-side</a>
          <ul>
            <li><a href="#buttons">Buttons</a></li>
          </ul>
        </li>  
      </ul>
    </li>
    <li><a href="#the-csv-file-used-in-this-calendar">The csv file used in this calendar</a></li>
    <li>
      <a href="#the-explanation-of-the-code">The explanation of the code</a>
      <ul>
        <li><a href="#the-package-and-the-frame">The package and the frame</a></li>
        <li><a href="#the-functions">The functions</a></li>
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
