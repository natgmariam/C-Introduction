/*
Description: Using user input and arithmetics already programed 
            into the code, to calculate circumference & area using user 
            input & outputting it within a table format using parametric 
            minipulators.
Input: user is prompted to input any variable as a double (radius)
            which is calculated into a vlaue. 
Output: The output is the results of the calculation done by the 
        code answering what the area & circumference; displayed 
        within the table created by the parametric minipulators.
*/
#include <iostream> //library for C++ code 
#include <cmath>  //library allowing access to math arithmetic 
#include <iomanip> //library with parametric/output miniplator libraray 
using namespace std; 

const double pi = 3.141592; //declaration of pi as universal constant 

int main(){    //required for c++ code to function 
double radius = 0; //declaration of radius, which will be user input 

//print enter statment & * 
cout << "Enter the radius of a circle" << endl;
cout << "**"; 
cin >> radius; //user input of radius 
cout << endl; 

//formula to calculate circumference using universal constant & input 
double circumference = 2 * pi * radius; 

//formula to calculate the area using user imput for radius 
double area = pi * pow(radius, 2); 

//skeletal outlin of the table to be printed 
string separator = "+--------+---------------+---------+ \n";

// data for the header to be printed 
string h1 = "radius", h2 = "circumference", h3 = "area";

// info for the header including the separators 
string header = "| " + h1 + " | " + h2 + " | " + h3 + "    |\n";

//top separator of the templat 
cout << separator; 

//header data will be printed
cout << header;  

//middle separator 
cout << separator; 

cout.precision (2); //allows two decimal places to show after whole number 
cout << fixed; //holds it fixed at only two places after decimal 

/* prints out the line with the calculations for radius, area, & circumference
settign the number to the left & fixing the number of spcaes after the 
declared number to match the table*/
cout << left //sets output to start from left side
<< "| " << setw(6) << radius 
<< " | " << setw(13) <<circumference 
<< " | " << setw(7) << area << " |" << endl; 

// bottom separator
cout << separator << endl;  


return 0;
}