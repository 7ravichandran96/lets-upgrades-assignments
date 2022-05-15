// identifiny the largest number between three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<endl<<"enter three random numbers : ";
    cin>>a >>b >>c;
    if (a>=b && a>=c)
    {
        cout<<endl<<"highest number = "<<a;
    }
    if (b>=a && b>=c)
    {
        cout<<endl<<"highest number = "<<b;

    }
    if (c>=a && c>=b)
    {
        cout<<endl<<"highest number = "<<c;

    }

    return 0;
    
};