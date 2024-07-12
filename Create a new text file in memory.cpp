#include <iostream>

#include <fstream>

using namespace std;

int main()

{

fstream fs;

fs.open("e:/data.txt", ios::out);

if(fs.is_open()==0)

{

cout<<"Cannot open file";

}

fs.close();

return 0;

