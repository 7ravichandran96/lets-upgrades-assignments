#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char vowel;
    cout<<endl<<" enter only character : ";
    cin>>vowel;
    switch (vowel)
    {    
        case 'A' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'a' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'E' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'e' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'I' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'i' : cout<<endl<<" ' "<<vowel<<" ' "<<"its an vowel ";
        break;
        case 'O' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'o' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'U' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case 'u' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an vowel ";
        break;
        case '0' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '1' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '2' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '3' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '4' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '5' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '6' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '7' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '8' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        case '9' : cout<<endl<<" ' "<<vowel<<" ' "<<" its an number ";
        break;
        default: cout<<endl<<" ' "<<vowel<<" ' "<<" its an consonent";
    }
    return 0;
}
