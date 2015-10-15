#include <iostream>
#include <limits>
using namespace std;

int main ()
{
  int  pick = 0;

    cout << "Celsius to Fahrenheit (enter 0)" << endl << "Celsius to Kelvin (enter 1)" << endl <<
    "Fahrenheit to Celsius (enter 2)" << endl << "Fahrenheit to Kelvin (enter 3)" << endl <<
      "Kelvin to Celsius (enter 4)" << endl<< "Kelvin to Fahrenheit (enter 5)" << endl << "Conversion Type: ";

     while (pick == 0) // pick is value  determined in code. 0 on initial run and if incorrect value is chosen
    {
 

int ct;


 cin >> ct; // stores user input which is choice for conversion

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> ct;
 }




 if (ct >= 0 && ct <=5) //determines whether ct is in proper range
{

  double temp; // temperature value that will be difined in each individual switch case

  switch (ct)
  {


    // Celcius to Farenheit
  case 0: 
  {
cout << "Enter the amount in Celsius: "; 
 cin >> temp ;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

 double ctemp = temp*1.8 + 32;
cout << temp << " Celcius is " << ctemp << " Farenheit" <<endl;
 break;
  }



// Celcius to Kelvin
  case 1: 
  {
cout << "Enter the amount in Celsius: "; 
 cin >> temp;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

  double ctemp = temp + 273.15;
cout << temp << " Celcius is " << ctemp << " Kelvin" <<endl;
 break;
  }



// Fahrenheit to Celsius 
  case 2:
  {
cout << "Enter the amount in Farenheit: "; 
 cin >> temp;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

 double ctemp = (temp - 32)/1.8;
cout << temp << " Farenheit is " << ctemp << " Celcius" <<endl;
 break;
  }



// Fahrenheit to Kelvin
  case 3:
  {
cout << "Enter the amount in Farenheit: "; 
 cin >> temp;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

 double ctemp = (temp-32)/1.8 + 273.15;
cout << temp << " Farenheit is " << ctemp << " Kelvin" <<endl;
 break;
  }



// Kelvin to Celsius
  case 4:
  {
cout << "Enter the amount in Kelvin: "; 
 cin >> temp;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

 double ctemp = temp - 273.15;
 cout << temp << " Kelvin is " << ctemp << " Celcius" << endl;
 break;
  }



  // Kelvin to Fahrenheit 
  case 5:
  {
cout << "Enter the amount in Kelvin: "; 
 cin >> temp;

 while (cin.fail()) //if incorrect input is inerted into input above, then this loop will run
 {
     cout << "Wrong input, try again: " ;
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin >> temp;
 }

 double ctemp =  (temp - 273.15) * 1.8 + 32;
cout << temp << " Kelvin is " << ctemp << " Farenheit" <<endl;
 break;
  }
  }

  pick=1;
}
else
  {
    cout << "Wrong input, try again: ";
    pick = 0;
  }
   }
 return 0;
}
