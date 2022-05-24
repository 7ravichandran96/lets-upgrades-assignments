#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int sum=0,num,i,c=0;
   float a;
   cout<<endl<<" enter you num : ";
   cin>>num;
   
      for(i=2; i<=num;i++)
      {
         if(i%2==0)      
        {
         cout<<endl<<"your even number : "<<i;
         c++;
         sum = sum + i;
         
         }
      }
           a=(float)sum/c;

   cout<<endl<<"sum of "<<num<<" even number : "<<sum;
   cout<<endl<<"average of "<<c++<<" even number: "<<a;
   return 0;
};