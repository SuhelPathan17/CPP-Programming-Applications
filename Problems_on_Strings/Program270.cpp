#include<iostream>
#include<string.h>
using namespace std;


void Display(char *ptr)
{
    while(*ptr != '\0')
    {
        cout<<*ptr<<"\t";
        ptr++;
    }
}
int main()
{
    char Arr[20];
    cout<<"Enter Full Name : \n";
    scanf("%[^'\n']s",Arr);

    int iLength = strlen(Arr);
    cout<<"Length of string is : "<<iLength<<"\n";

    Display(Arr);

    return 0;
}