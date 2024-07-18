#include <iostream>

using namespace std;

int main() {

 // Dynamically allocate memory for an integer

 int *ptr = new int;

 // Check if memory allocation was successful

 if (ptr == nullptr) {

 cerr << "Memory allocation failed!" << endl;

 return 1;

 }
// Assign a value to the dynamically allocated memory

 *ptr = 42;

 // Display the value

 cout << "Value stored in dynamically allocated memory: " << *ptr << endl;

 // Deallocate the memory

 delete ptr;

 // After deleting, accessing the memory can lead to undefined behavior

 // So, it's a good practice to set the pointer to nullptr

 ptr = nullptr;

 return 0;

}
