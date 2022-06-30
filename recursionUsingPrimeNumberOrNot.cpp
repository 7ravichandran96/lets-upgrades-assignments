#include<iostream>
#include<cmath>
using namespace std;
int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return CheckPrime(i+1,num);
    }
}
int main()
{
    int num;
    cout<<"Enter your Number:";
    cin>>num;

    if(CheckPrime(2,num)==0)
        cout<<"It is a Prime Number.";
    else
        cout<<"It is not a Prime Number.";
}