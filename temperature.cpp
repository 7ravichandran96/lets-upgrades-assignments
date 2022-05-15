// convert temprature from celcious to farenheit
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float c;
float convert;
cout<<endl<<"enter the celcious of temperatur here : ";
cin>>c;
convert = (c * 1.8 ) +32;
cout<<endl<<"your farenheit temp is = "<<convert;
return 0;
}