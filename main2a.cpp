/* main.cpp
Description: using imput values to calculate volume of the
        pentagonal aquarium & how many fish it can hold by volume. 
Input: valuse for base, apothem, hight, and fish
Output: calculated results of arythmatic to calculate 
        the total volume & max volume with the fill factor 
        taken into considration.
*/
#include <iostream> //library 
using namespace std; 

int main(){    //a must for C++ 

// print welcome statment 
cout << "Welcome to the Aquarium Calculator" << endl;

// variables for the volume of the tank for input values  
 double apothem = 0;
 int base = 0;
 int height = 0;
 const double fillfactor = 0.923;

 double volumeperfish = 0;

// print apothem 
 cout <<"Enter the apothem: "; 
 cin >> apothem; //input value for apothem 

// print base 
 cout << "Enter the base: "; 
 cin >> base; //input value for base 

// print height 
 cout << "Enter the height: "; 
 cin >> height; //input vlaue for height 

 // formula to calculate pentagonal aquariums 
 double totalvolume = 2.5 * apothem * base * height; 

 // print tottal volume & cubic inches 
 // output of volume is displayed 
 cout << "Total volume is " << totalvolume
 << " cubic inches " << endl;
 
 // pring volume per fish 
 cout << "Enter the volume per fish: ";
 cin >> volumeperfish; // input number of fish per volume  
 
 /* claculation to know how many fish can be in the 
 aquarium without spilling over, using the fill factor*/
 double maxvolume = (totalvolume * fillfactor) / volumeperfish; 
 
/* pring statments including input from earlier to calculate 
maxvolume with fill factor to a percntage*/
 cout << "The max fish in a tank with specifications\n"
 << apothem << " x " << base << " x " << height 
 << " with fill factor of 0.923 is " << maxvolume << endl;
return 0;
} 