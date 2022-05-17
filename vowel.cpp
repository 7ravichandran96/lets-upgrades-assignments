//i am using if else for identifing vowel or consonant 
#include<iostream>
using namespace std;
int main()
{
    char vowel;

    cout<<endl<<" To Check Wether the entered  character is vowel or consonent";
    cin>>vowel;

    if (vowel == 'a' || vowel == 'A' 
        || vowel == 'e' || vowel =='E' 
        || vowel == 'i' || vowel == 'I'
        || vowel == 'o' ||vowel == 'O' 
        || vowel == 'u' || vowel == 'U' )
    {
        cout<<endl<<vowel<<" you had entered the vowel in alphabets";
    }else
    {
        cout<<endl<<vowel<<" you had entered the consonent in alphabets";
    }
    
    cin>>vowel;
    return 0;
    
    
};
