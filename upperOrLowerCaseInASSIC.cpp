/*
5.	Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
*/

#include<iostream>
 
using namespace std;
 
int main()
{  
char ch;
cout<<"Enter any character: ";
cin>>ch;
 
if(ch>=65 &&ch <=90)
{
cout<<endl<<ch<<" : You entered an uppercase character";
}
else if(ch>=97 && ch<=122)
{
cout<<endl<<ch<<" : You entered a lowercase character";
}


return 0;
};