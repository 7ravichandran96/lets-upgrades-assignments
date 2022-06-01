#include<iostream>
#include<iomanip>
using namespace std;
int nest(int);
int main()
{
    int rows;

    cout<<"enter the no of rows to be printed  : " ;
    cin>>rows;

    nest(rows);
}

int nest(int rows)
{
    int i,j,sp=rows*2;
    
     for(i=1; i<=rows; i++)
     {
         for(j=1;j<=sp;j++)
             cout<<" ";

         for(j=1; j<=i; j++)     
            ((j==1)||(j==i))?cout<<setw(4)<<"1":cout<<setw(4)<<!j;  
      
        cout<<endl;
        sp=sp-2;
     }
     return 0;
}