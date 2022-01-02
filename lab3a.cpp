/* 
Description: Using user input and arythmatics already programed 
            into the code, to calculate sin, cos, and tan of the
            input angle after converting it into radians.
Input: user is prompted to input an angle in degrees
Output: The output is the results of the calculation done by the 
        code answering what sin, cos, and tan of 10 degrees are 
        after they are converted inot radians.
*/
#include <iostream> //library 
#include <cmath> //accses to math library 
using namespace std;
const double pi = 3.141592; // declaration of pi as a universal constant 

int main() { 
double angle = 0; //declaration of angle to allow user input 

//print out Enter statment & ** 
cout << "Enter an angle value, in degrees" << endl
<< "**";
cin >> angle; //user input of the angle 
cout << endl;


//calculation to convert degrees into radians 
double radians = angle * pi /180;

//print input angle in degrees & print result of conversion into radians  
cout << angle << " degrees" << " = " << radians << " radians" << endl; 

//pring sin & calcualte sin 10 in radians
cout << "sin(" << angle << ") = " << sin(radians) << endl;

//pring cos & calcualte cos 10 in radians
cout << "cos(" << angle << ") = " << cos(radians) << endl;

//pring tan & calcualte tan 10 in radians 
cout << "tan(" << angle << ") = " << tan(radians) << endl;


return 0;
}