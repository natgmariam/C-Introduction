/*
Assignment number: Lab #2A 
Description: Program will print basic arythmahic formulas using integras 
Input: int intergral &  double expressions 
output: variables showing the arythmthic results
*/

#include <iostream>
using namespace std;

int main() {
// declaring variables by using int. to identfy whats x and y
// x is declared as 5
 int x = 5; 
    double X = 5; 
 // y is declared as 2
 int y = 2;   
    double Y = 2; 

//arthmitic proccedurs will be done bellow, 
//such as +, -, *, /, %, and doubble of x and y
cout << x << " + " << y << " = " << x + y << endl;
cout << x << " - " << y << " = " << x - y << endl;
cout << x << " * " << y << " = " << x * y << endl;
cout << x << " / " << y << " = " << x / y << endl;
cout << x << " % " << y << " = " << x % y << endl; 
// limits the digets that follow after the whole number, the right side 
cout.precision (1);  
//puts it as scientfic notation
cout << scientific;                   
// holds the right side of the decimal to only one 0   
cout << fixed << X << " / " << Y << " = " << X / Y << endl; 

return 0;
}