/*
Declaring a variable
The box we discussed in the previous problem is what is known as a Variable in C++.
And the number that we put inside that box is called the 'Value' of the variable.

When we create a box, we should also specify what Type of box it is.

If it is an "int" box, then you can only place integers inside it. You cannot place 3.5 into it.
For that, you will need to specify that you are going to place decimal values inside it while creating the box, which would make it a "double" box. These are called Variable Types.
These are the various main types in C++:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
Variables can be given different values and later on can be modified too.
Write a program which does the following

Create an int variable named
N
u
m
b
e
r
Number
Assign the value 19 to
N
u
m
b
e
r
Number
Use the cout command to output the value of
N
u
m
b
e
r
Number to the console.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int Number = 19;     //Update the blanks with the value assigned to Number
	cout << Number;      //Output the variable to the console
	return 0;
}
