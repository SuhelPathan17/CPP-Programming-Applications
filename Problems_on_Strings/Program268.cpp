#include<iostream>
using namespace std;

int main()
{
    char Arr[20];
    char *ptr = Arr;

    cout<<"Enter Full Name : \n";
    scanf("%[^'\n']s",Arr);

    int iCnt = 0;
    while(*ptr != '\0')
    {
        iCnt++;
        ptr++;
        
    }

    cout<<"Length of string is : "<<iCnt;
    return 0;
}