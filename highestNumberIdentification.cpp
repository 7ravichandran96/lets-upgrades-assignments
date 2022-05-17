// identifiny the largest number between three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<endl<<"enter a random numbers : ";
    cin>>a;
    cout<<endl<<"enter b random numbers : ";
    cin>>b;
    cout<<endl<<"enter c random numbers : ";
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<endl<<a<<" is larger number between three numbers "; 
        }
       
    }
    if (b>a)
    {
        if (b>c)
        {
            cout<<endl<<b<<" is larger number between three numbers "; 
        }
       
    }
    if (c>b)
    {
        if (c>a)
        {
            cout<<endl<<c<<" is larger number between three numbers "; 
        }
       
       
    }
    if (a==b==c==a)
    {
       cout<<endl<<"enterd three random numbers are in equal number";
    } 
    return 0;
    
};
