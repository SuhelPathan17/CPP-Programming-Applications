#include<iostream>
using namespace std;

int main()
{
    char Name[20];
    cout<<"Enter your full name\n";
    //cin>>Name;                            // problem
    scanf("%[^'\n']s",Name);                // Solution

    cout<<"Full Name is: "<<Name<<"\n";  
    return 0;
}