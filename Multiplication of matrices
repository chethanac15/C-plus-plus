#include <iostream>

using namespace std;

int main() {

 int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

 int m2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

 int result[3][3] = {0};

 cout << "Matrix 1:" << endl;

 for (int i = 0; i < 3; ++i) {

 for (int j = 0; j < 3; ++j)

 cout << m1[i][j] << " ";

 cout << endl;

 }

 cout << "\nMatrix 2:" << endl;

 for (int i = 0; i < 3; ++i) {

 for (int j = 0; j < 3; ++j)

 cout << m2[i][j] << " ";

 cout << endl;

 }

 cout << "\nResultant Matrix:" << endl;

 for (int i = 0; i < 3; ++i) {

 for (int j = 0; j < 3; ++j) {

 for (int k = 0; k < 3; ++k) {

 result[i][j] += m1[i][k] * m2[k][j];

 }

 cout << result[i][j] << " ";

 }

 cout << endl;

 }

 return 0;

}
