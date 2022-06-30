#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
    cout<<"Enter Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }
    cout<<endl<<"subracting the Two Given Matrix..."<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat3[i][j] = mat1[i][j]-mat2[i][j];
    }
    cout<<"subracting Result of Two Given Matrix is:"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<setw(4)<<mat3[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}