#include <iostream>

using namespace std;

int main() {

 int rows;

 char ch = 'A';

 cout << "Enter the number of rows: ";

 cin >> rows;

 for (int i = 1; i <= rows; ++i) {

 for (int j = 1; j <= i; ++j) {

 cout << ch << " ";

 ++ch;

 }

 cout << endl;

 }

 return 0;

}
