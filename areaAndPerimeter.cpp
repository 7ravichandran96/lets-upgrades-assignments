//identify area and perimeter using its length and width
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float length,width,area,perimeter;
    cout<<endl<<"enter the value of length in your rectangle : ";
    cin>>length;
    cout<<endl<<"enter the value of width in your rectangle  : ";
    cin>>width;
    area = length * width;
    perimeter = (length + width) * 2;
    cout<<endl<<"entered rectangles with your length and width has an perimeter of = "<<perimeter;
    cout<<endl<<"entered rectangles with your length and width has an area of = "<<area;
    return 0;

}