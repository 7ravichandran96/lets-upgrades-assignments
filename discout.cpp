#include<iostream>
using namespace std;
main()
{
    float quantity,cost;
    cout<<endl<<"Enter quantity ";
    cin>>quantity;

    if(quantity*100 > 1000)
    {
        cost  = (quantity*100)-(0.1*(quantity*100));
        cout<<"Your cost is ₹:"<<cost;
    }
    else
    {
        cout<<"Your cost is ₹:-"<<quantity*100;
    }
    
    return 0;
};