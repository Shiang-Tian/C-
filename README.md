# C++
This repository is the basic things for C++  
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
      </ul>
    </li>
  </ol>
</details>

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

# __Basics__
## __Variables__
* Variables can't have the same name
* Variables can't start from the number
* We can't use spaces
* Our variables should be self-descriptive
* Variables can't be constructed of special characters, keywords
* Variables should be nouns

```c++
  short
```

颜色名 | 十六进制颜色值 |  rgb颜色  
-|-|-
黑色（black) | 000000 | 	rgb(0, 0, 0) |
蓝色（blue） | 0000FF | rgb(0, 0, 255) |
灰色（grey） | 808080 | rgb(128, 128, 128) |
绿色（green） | 008000 | rgb(0, 128, 0) |
橙色（orange） | FFA500 | rgb(255, 165, 0) |
红色(red) | FF0000 | rgb(255, 0, 0) |
黄色（yellow） | FFFF00 | rgb(255, 255, 0) |
