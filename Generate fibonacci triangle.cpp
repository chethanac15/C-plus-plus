#include <iostream>

using namespace std;

int main() {

    int rows, a = 0, b = 1, c;

    cout << "Enter the number of rows: ";

     cin >> rows;

    for (int i = 1; i <= rows; ++i) {

   for (int j = 1; j <= i; ++j) {

    cout << a << " ";

     c = a + b;

    a = b;

 b = c;

 }

 cout << endl;

 }

 return 0;

}
