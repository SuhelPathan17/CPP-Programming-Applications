#include<iostream>
using namespace std;

int main()
{
    char Arr[20];

    cout<<"Enter Full Name : \n";
    scanf("%[^'\n']s",Arr);

    cout<<"Welcome "<<Arr; 
    return 0;
}