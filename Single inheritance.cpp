#include<iostream>
using namespace std;
class ElectronicDevice
{
public:
ElectronicDevice()
{
cout<<"Im Electronic device\n";
}
};

class Computer : public ElectronicDevice
{
public:
Computer()
{
cout<<"I am computer\n;
}
};

int main();
{
Computer().obj;
return 0;
}

