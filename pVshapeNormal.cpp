#include <iostream>
#include<iomanip>
using namespace std;
int nest(int);
int main()
{
   int n;
    
    cout<<endl<<"enter a number : ";
    cin>>n;
    nest(n);
}

int nest(int n)
{
        int i,j,space;

        space=((n*2)-3)*4;

        for (i=1; i <= n; i++)
        {
            for(j=1; j<=i; j++)
                cout<<setw(4)<<j;

                     for(j=1; j<=space; j++)
                     cout<<" ";
            if (i!=n)
                    j=i;
             else   
                    j=i-1;
               
                    for(;j>=1;j--)
                        cout<<setw(4)<<j;
                
                 cout<<endl;
                 space=space-8;
        }


}