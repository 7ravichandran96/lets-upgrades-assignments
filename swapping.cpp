//swapping 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //before swapping
int a,b;
cout<<endl<<"before swaping the value of a = ";
cin>>a;
cout<<endl<<"before swaping the value of b = ";
cin>>b;

cout<<endl<<"before swaping value of a = "<<a<<endl<<"before swaping value of b = "<<b;


a=a+b;
b=a-b;
//AFTER SWAPING
cout<<endl<<"after swaping value of a = "<<a<<endl<<"after swaping value of b = "<<b;

return 0;

}