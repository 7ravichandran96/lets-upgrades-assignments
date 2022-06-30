#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int arr[20], tot, i, j, k, elem, index;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=1; i<tot; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
    }
    cout<<endl<<"The New Array (Sorted Array): "<<endl;
    for(i=0; i<tot; i++)
        cout<<setw(4)<<arr[i];
    cout<<endl;
    return 0;
}