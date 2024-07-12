#include <iostream>

#include <sstream> 

#include <limits> 

using namespace std;

int main() {

 

 cout << "Enter real numbers separated by spaces: ";

 string input;

 getline(cin, input);

 // Create a stringstream to parse the input

 stringstream ss(input);

 

 // Initialize variables for max and min

 double max = numeric_limits<double>::lowest();

 double min = numeric_limits<double>::max();

 double num;

 // Iterate through the numbers in the stringstream

 while (ss >> num) {

 

 if (num > max) max = num;

 if (num < min) min = num;

 }

 // Check if any numbers were entered

 if (max == numeric_limits<double>::lowest() && min == numeric_limits<double>::max()) {

 cout << "No numbers entered." << endl;

 } else {

 // Output the maximum and minimum

 cout << "Maximum: " << max << endl;

 cout << "Minimum: " << min << endl;

 }

 return 0;

