#include <iostream>

#include <fstream>

using namespace std;

int main () {

ofstream filestream("testout.txt");

if (filestream.is_open())

{

filestream << "Dayananda Sagar.\n";

filestream << "CSE Department.\n";

filestream.close();

}

else cout <<"File opening is fail.";

return 0;

