#include <iostream>

using namespace std;

int main() {

 int decimalNum;

 cout << "Enter a decimal number: ";

 cin >> decimalNum;

 if (decimalNum < 0) {

 cout << "Negative numbers are not supported." << endl;

 return 1;

 }

 if (decimalNum == 0) {

 cout << "Binary equivalent: 0" << endl;

 return 0;

 int binary[32]; // Array to store binary digits

 int index = 0; // Index to store binary digits in the array

 // Convert decimal to binary

 while (decimalNum > 0) {

 binary[index] = decimalNum % 2;

 decimalNum /= 2;

 index++;

 }

 // Print binary equivalent

 cout << "Binary equivalent: ";

 for (int i = index - 1; i >= 0; i--) {

 cout << binary[i];

 }

 cout << endl;

 return 0;

}
