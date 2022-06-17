#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,n,sp=0;

    cout<<endl<<"Enter the number of lines to be printer : ";
    cin>>n;

    for(i=n;i>=1;i--)
    {
        
        for(j=1;j<=i;j++)
          cout<<setw(2)<<j;
                
        for(j=1;j<=sp;j++)
          cout<<" ";

        if (i==n)
        {
            j=i-1;
            sp=2;
        }
        else               
         {
            j=i;
            sp=sp+4;
         }

    for(;j>=1;j--)
      cout<<setw(2)<<j;

    cout<<endl;

    }
}