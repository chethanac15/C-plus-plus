#include <iostream>

Using namespace std;

int main() {

 char inputChar;

 // Prompt the user to enter a character

 cout << "Enter a character: ";

 cin >> inputChar;

 // Display the ASCII value of the entered character

 cout << "ASCII value of '" << inputChar << "' is: " << static_cast<int>(inputChar) << endl;

 return 0;

}
