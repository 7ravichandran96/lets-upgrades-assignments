#include<iostream>
#include<iomanip>
using namespace std;
int main()                                         
{
    int arr[5],rev[5],i,j;

    for(i=0,j=4;i<5;i++,j--)
    {
        cout<<endl<<"enter the values to be changed : ";
        cin>>arr[i];

        rev[j]=arr[i];

    }

     cout<<endl<<setw(3)<<"arr  "<<setw(10)<<"  rev";

     for(i=0;i<5;i++)
     
       cout<<endl<<setw(3)<<arr[i]<<setw(10)<<"  "<<rev[i];
     
}