#include <iostream>
#include<iomanip>
using namespace std;
int nest(int);
int main()
{
    int rows;

    cout << "Enter number of rows : ";
    cin >> rows;

    nest(rows);
}

int nest(int rows)
{
    int i,j,s=rows*2;
    
    for( i = 1; i <= rows; i++)
    {
        for(j=1;j<=s;j++)
            cout<<" ";
            
        for( j = 1; j <= i; j++)
         
            if (i%2!=0 )
            {              
                cout<<setw(4)<<"1";
            }
            else
            cout<<setw(4)<<"0";   

       cout<<endl;
       s=s-2;
    }    
}
