#include <iostream>

using namespace std;

void num (int k)

{
try

{

if (k==0) throw k;

else

else

if (k>0) throw 'P';

if (k<0) throw 1.0;

cout<<"*** end of try block ***\n";

}

catch(char g)

{

cout<<"Caught a positive value \n";

}

catch (int j)

{

cout<<"caught an null value \n";

}

catch (double f)

{

cout<<"Caught a Negative value \n";

}

cout<<"*** end of try catch ***\n \n";

}

int main()

{

cout<<"Demo of Multiple catches"<<endl;

num(0);

num(5);

num(-1);

return 0;

}
