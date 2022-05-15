// identify reminder and Quotient 
#include<iostream>
using namespace std;
int main()
{
    int divisor,divident,reminder,Quotient;
    cout<<endl<<" enter value of divident :";
    cin>>divident;
    cout<<endl<<" enter value of divisor :";
    cin>>divisor;

    reminder = divident/divisor;
    Quotient = divident%divisor;

    cout<<endl<<"Quotient of enterd "<<divident<<" and "<<divisor<<"  = "<<Quotient;
    cout<<endl<<"reminder "<<divident<<" and "<<divisor<<"  = "<<reminder;



    return 0;
};
