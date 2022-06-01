
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;
    int space=30;
    

    for(i=1; i<=5; i++)
    {
     
        for(j=1; j<=space;j++)
            cout<<"  ";
        
        
        for(j=1; j<i;j++) 
                                    
            cout<<setw(4)<<i-j+1;
        

        for(j=1; j<=i; j++)
            cout<<setw(4)<<j; 
    
        cout<<endl;
        space=space-2;     
        
       
    } 
    return 0;
}
