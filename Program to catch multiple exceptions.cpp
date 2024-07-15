#include <iostream>

using namespace std;

void num (int k)

{

try

{

if (k==0) throw k;

else

else

}

if (k>0) throw 'P';

if (k<0) throw 1.0;

catch(...)

{

cout<<"Caught an Exception"<<endl;

}

}

int main()

{

cout<<"Demo of Multiple catches"<<endl;

num(0);

num(5);

num(-1);

return 0;

