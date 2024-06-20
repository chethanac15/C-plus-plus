#include <iostream>

#include <cmath>

using namespace std;

int main() {

 int num, originalNum, remainder, n = 0, result = 0;

 cout << "Enter a positive integer: ";

 cin >> num;

 originalNum = num;

 while (originalNum != 0) {

 originalNum /= 10;

 ++n;

 }

 originalNum = num;

 while (originalNum != 0) {

 remainder = originalNum % 10;

 result += pow(remainder, n);

 originalNum /= 10;

 }

 if (result == num)

 cout << num << " is an Armstrong number." << endl;

 else

 cout << num << " is not an Armstrong number." << endl;

 return 0;

}
