#include <iostream>

using namespace std;

class Temp {

public:

 // Function to convert Fahrenheit to Celsius

 static double convertToFahrenheit(double fahrenheit) {

 return (fahrenheit - 32.0) * 5.0 / 9.0;

 }

};

int main() {

 double fahrenheit;

 // Prompt the user to enter temperature in Fahrenheit

 cout << "Enter temperature in Fahrenheit: ";

 cin >> fahrenheit;

 // Convert Fahrenheit to Celsius and display the result

 double celsius = Temp::convertToFahrenheit(fahrenheit);

 cout << "Temperature in Celsius: " << celsius << endl;

 return 0;

