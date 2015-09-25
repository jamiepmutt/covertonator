//this is where I will put my comments even though this is for fun
//This is by Jamie Perlmutter


#include <iostream>
using namespace std;

int main()
{

cout << "hello there";
cout << endl;

cout << "Convertonators" << endl;
cout << "1 - Convert Inches to Millimeters" << endl;
cout << "2 - Convert temperature from C to F" << endl;

int choice;
cout << "choice: ";
cin >> choice;

switch (choice)
{
case 1:

float inches;
float mm;
cout <<"we will be converting "
<< "inches to mm today" << endl;
cout <<"please enter the number of inches "
<<"that you wish to convert: ";

cin >> inches;
cin.get();

cout << "you entered: "<< inches << "in"
<< endl;
mm=25.4*inches;
cout << inches << "in converts to "
<< mm << "mm" << endl;

cout << "thank you for using The Convertonator"
<< endl;
break;

case 2:
float celsius;
float fahr;

cout << "enter temp in Celsius: " <<endl;
cin >> celsius; cin.get();

fahr=(celsius*9.0/5.0)+32.0;

cout << celsius <<" Celsius = " <<fahr;
cout << " Fahrenheit" << endl;

cout <<"please hit enter when finished:";
cin.get();
break;
}

return 0;
}
