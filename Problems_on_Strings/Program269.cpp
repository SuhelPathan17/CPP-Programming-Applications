#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Arr[20];
    char *ptr = Arr;

    cout<<"Enter Full Name : \n";
    scanf("%[^'\n']s",Arr);

    int iLength = strlen(Arr);
    cout<<"Length of string is : "<<iLength<<"\n";

    while(*ptr != '\0')
    {
        cout<<*ptr<<"\t";
        ptr++;
    }

    return 0;
}