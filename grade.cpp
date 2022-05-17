/*3.	A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/
#include<iostream>
using namespace std;
int main()
{
    float grade;

    cout<<endl<<"enter your mark to show your grade ";
    cin>>grade;

    if ( (grade >= 80) && (grade <= 100))
    {
        cout<<endl<<grade<<": your grade is "<<" A ";
    }else if ((grade >= 60) && (grade < 80) )
    {
         cout<<endl<<grade<<": your grade is "<<" B ";
    }else if ((grade >= 50) && (grade < 60))
    {
      cout<<endl<<grade<<": your grade is "<<" C ";

    }else if ((grade >= 45) && (grade < 50))
    {
      cout<<endl<<grade<<": your grade is "<<" D ";

    }else if ((grade >= 25) && (grade < 45))
    {
      cout<<endl<<grade<<": your grade is "<<" E ";

    }
    else if ((grade > 0)&& (grade<25))
    {
      cout<<endl<<grade<<": your grade is "<<" F ";

    }
    else 
    {
      cout<<endl<<grade<<": you entered number does not represent any grade system";

    }

    return 0;
    }

