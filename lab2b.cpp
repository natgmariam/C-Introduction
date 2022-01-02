/* 
Description: using imput values to caalculate arythmathic 
            problems using integers & doubles . 
Input: selcet integers & doubles to run calculations  
Output: calculated results of arythmatic seaperating intgers 
        from the doubls an interactive output 
*/
#include <iostream> // library 
using namespace std;
int main(){ //a must fo c++ program 
// declaring the posible variable to be input 
int x  = 0;
int y = 0;
//print enter an integer & ** 
cout << "Enter an integer " << endl 
<< "**"; 
cin >> x; // user input of the first integer 
cout << endl; //prints a new line to add space in between 
//print enter statment for second integer & ** 
cout << "Enter another integer " << endl
<< "**"; 
cin >> y; //user input of the second integer 
cout << endl;  
cout << x << " + " << y << " = " << x + y << endl; //arthmitic proccedurs will be done bellow, 
cout << x << " - " << y << " = " << x - y << endl; //such as +, -, *, /, %
cout << x << " * " << y << " = " << x * y << endl; 
cout << x << " / " << y << " = " << x / y << endl;
cout << x << " % " << y << " = " << x % y << endl;
 //declaring posible vaariable inputs as doubles 
double number1 = 0;
double number2 = 0;
//print an enter statment and **
cout << endl;
cout << "Enter a double " << endl
<< "**";
cin >> number1;// input of the double
// print an enter statment & **
cout << endl;
cout << "Enter another double " << endl
<< "**"; 
cin >> number2; // second double input 
cout << endl;
//print the double input numbers to do a module arthmtic  
cout << number1 << " / " << number2 << " = " << number1 / number2 <<endl;
    
    return 0;
} 