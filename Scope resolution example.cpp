#include<iostream>
using namespace std;
int a=100;
{
int a=50;
{
int a=5;
cout<<"we are in inner bloc\n";
cout<<"a="<<a\n;
cout<<"::a"<<::a\n;
cout<<"we are in outer block\n";
cout<<"a="<<a<<endl;
cout<<"::a"<<::a<<endl;
return 0;
}
